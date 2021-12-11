#pragma once
#include "CoreMinimal.h"
#include "ThrowableItem.h"
#include "UpgradableGear.h"
#include "RejoinListener.h"
#include "CoolDownProgressStyle.h"
#include "ShieldGeneratorItem.generated.h"

class UCapacityHoldingItemAggregator;
class UDialogDataAsset;

UCLASS()
class AShieldGeneratorItem : public AThrowableItem, public IUpgradableGear, public IRejoinListener {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UCapacityHoldingItemAggregator* ChargeCapacity;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UCapacityHoldingItemAggregator* CarryCapacity;
    
    UPROPERTY(EditAnywhere)
    float RechargeDuration;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_UnchargedCount)
    int32 UnchargedCount;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float RechargeProgress;
    
    UPROPERTY(EditAnywhere)
    float SupplyStatusWeight;
    
    UPROPERTY(EditAnywhere)
    UDialogDataAsset* ShoutRecarged;
    
    UPROPERTY(EditAnywhere)
    FCoolDownProgressStyle RechargeProgressUI;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveGeneratorReturned();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveGeneratorRechargeProgress(float Progress);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveGeneratorRecharged();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_UnchargedCount(int32 OldCount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsRecharging() const;
    
    UFUNCTION(BlueprintCallable)
    void GeneratorReturned();
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    AShieldGeneratorItem();
    
    // Fix for true pure virtual functions not being implemented
};

