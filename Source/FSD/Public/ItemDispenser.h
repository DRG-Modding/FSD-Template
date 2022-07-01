#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Actor.h"
#include "EInputKeys.h"
#include "ItemDispenserDelegateDelegate.h"
#include "ItemDispenser.generated.h"

class ACarriableItem;
class UInstantUsable;
class USceneComponent;
class APlayerCharacter;

UCLASS(Blueprintable)
class AItemDispenser : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UInstantUsable* Usable;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemDispenserDelegate OnItemSpawned;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemDispenserDelegate OnItemTaken;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> ItemHistory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ACarriableItem> itemClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_SpawnedItem, meta=(AllowPrivateAccess=true))
    AActor* spawnedItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ItemSpawnTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialItemSpawnTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_IsOpen, meta=(AllowPrivateAccess=true))
    bool IsOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool KillItemsOnDestuction;
    
public:
    AItemDispenser();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
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
    
};

