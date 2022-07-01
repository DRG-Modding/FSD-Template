#pragma once
#include "CoreMinimal.h"
#include "ThrowableItem.h"
#include "UpgradableGear.h"
#include "CoolDownProgressStyle.h"
#include "RejoinListener.h"
#include "ShieldGeneratorItem.generated.h"

class UDialogDataAsset;
class UCapacityHoldingItemAggregator;

UCLASS(Blueprintable)
class AShieldGeneratorItem : public AThrowableItem, public IUpgradableGear, public IRejoinListener {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCapacityHoldingItemAggregator* ChargeCapacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCapacityHoldingItemAggregator* CarryCapacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RechargeDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_UnchargedCount, meta=(AllowPrivateAccess=true))
    int32 UnchargedCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float RechargeProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SupplyStatusWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* ShoutRecarged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCoolDownProgressStyle RechargeProgressUI;
    
public:
    AShieldGeneratorItem();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
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
    
    
    // Fix for true pure virtual functions not being implemented
};

