#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Actor.h"
#include "EInputKeys.h"
#include "ItemDispenser.generated.h"

class USceneComponent;
class UInstantUsable;
class ACarriableItem;
class APlayerCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FItemDispenserOnItemSpawned, AActor*, spawnedItem);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FItemDispenserOnItemTaken, AActor*, spawnedItem);

UCLASS()
class AItemDispenser : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(Export, VisibleAnywhere)
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    UInstantUsable* Usable;
    
    UPROPERTY(BlueprintAssignable)
    FItemDispenserOnItemSpawned OnItemSpawned;
    
    UPROPERTY(BlueprintAssignable)
    FItemDispenserOnItemTaken OnItemTaken;
    
protected:
    UPROPERTY(Transient)
    TArray<AActor*> ItemHistory;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<ACarriableItem> itemClass;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_SpawnedItem)
    AActor* spawnedItem;
    
    UPROPERTY(EditAnywhere)
    float ItemSpawnTime;
    
    UPROPERTY(EditAnywhere)
    float InitialItemSpawnTime;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_IsOpen)
    bool IsOpen;
    
    UPROPERTY(EditAnywhere)
    bool KillItemsOnDestuction;
    
    UFUNCTION(BlueprintCallable)
    void SpawnItem();
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Open();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnUsed(APlayerCharacter* User, EInputKeys Key);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SpawnedItem(AActor* oldItem);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsOpen();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPickedUpItem(AActor* Item);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOpenChanged(bool NewOpen);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnItemSpawnedEvent(AActor* Item);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasItem() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetItem() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Close();
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    AItemDispenser();
};

