#pragma once
#include "CoreMinimal.h"
#include "CapacityBasedItemAggregator.h"
#include "Upgradable.h"
#include "RejoinListener.h"
#include "CapacityHoldingItemAggregator.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UCapacityHoldingItemAggregator : public UCapacityBasedItemAggregator, public IUpgradable, public IRejoinListener {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MaxAmmo, meta=(AllowPrivateAccess=true))
    int32 MaxAmmo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_AmmoCount, meta=(AllowPrivateAccess=true))
    int32 AmmoCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseRejoin;
    
public:
    UCapacityHoldingItemAggregator();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
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
    
    
    // Fix for true pure virtual functions not being implemented
};

