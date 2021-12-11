#pragma once
#include "CoreMinimal.h"
#include "CapacityBasedItemAggregator.h"
#include "RejoinListener.h"
#include "Upgradable.h"
#include "CapacityHoldingItemAggregator.generated.h"

UCLASS()
class UCapacityHoldingItemAggregator : public UCapacityBasedItemAggregator, public IUpgradable, public IRejoinListener {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MaxAmmo)
    int32 MaxAmmo;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_AmmoCount)
    int32 AmmoCount;
    
    UPROPERTY(EditAnywhere)
    bool UseRejoin;
    
public:
    UFUNCTION(BlueprintCallable)
    void UseAmmo(int32 count);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetMaxAmmo(int32 InMaxAmmo, bool InChangeCurrentAmount);
    
    UFUNCTION(BlueprintCallable)
    void Resupply(float percentage);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_MaxAmmo();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AmmoCount();
    
public:
    UFUNCTION(BlueprintCallable)
    void AddAmmo(int32 Amount);
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UCapacityHoldingItemAggregator();
    
    // Fix for true pure virtual functions not being implemented
};

