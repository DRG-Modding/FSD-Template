#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EquippedActorData.h"
#include "InventoryBase.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UInventoryBase : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ActorsSelectable, meta=(AllowPrivateAccess=true))
    TArray<AActor*> ActorsSelectable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ActorsNonSelectable, meta=(AllowPrivateAccess=true))
    TArray<AActor*> ActorsNonSelectable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_EquippedActor, meta=(AllowPrivateAccess=true))
    FEquippedActorData EquippedActor;
    
    UPROPERTY(EditAnywhere)
    AActor* LastEquippedActors[2];
    
public:
    UInventoryBase();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetEquippedActor(const FEquippedActorData& Actor, bool CallClientDelayed);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_EquipExternalActor(AActor* Actor);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_EquippedActor(FEquippedActorData& OldActor);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_ActorsSelectable();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ActorsNonSelectable();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AActor*> GetSelectableActors() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AActor*> GetAllItems() const;
    
    UFUNCTION(BlueprintCallable)
    void EquipPrevious();
    
    UFUNCTION(BlueprintCallable)
    void EquipNull();
    
    UFUNCTION(BlueprintCallable)
    void EquipNext();
    
    UFUNCTION(BlueprintCallable)
    void EquipLast();
    
    UFUNCTION(BlueprintCallable)
    void EquipAtIndex(int32 Index, bool ignoreUsing);
    
};

