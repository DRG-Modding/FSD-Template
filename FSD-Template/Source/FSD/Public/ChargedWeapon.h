#pragma once
#include "CoreMinimal.h"
#include "AmmoDrivenWeapon.h"
#include "ChargedWeapon.generated.h"

class UAnimMontage;
class UFXSystemAsset;
class UFXSystemComponent;
class USoundCue;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FChargedWeaponOnChargeChanged, float, charge);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FChargedWeaponOnHeatChanged, float, charge);

UCLASS(Abstract)
class AChargedWeapon : public AAmmoDrivenWeapon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FChargedWeaponOnChargeChanged OnChargeChanged;
    
    UPROPERTY(BlueprintAssignable)
    FChargedWeaponOnHeatChanged OnHeatChanged;
    
protected:
    UPROPERTY(EditAnywhere)
    UAnimMontage* FP_OverheatAnim;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* FP_ChargeupMontage;
    
    UPROPERTY(EditAnywhere)
    UFXSystemAsset* ChargeupParticles;
    
    UPROPERTY(Export, Transient)
    UFXSystemComponent* ChargeupParticleInstance;
    
    UPROPERTY(EditAnywhere)
    UFXSystemAsset* ChargeupFireMuzzleFlash;
    
    UPROPERTY(Transient)
    USoundCue* NormalFiresound;
    
    UPROPERTY(EditAnywhere)
    USoundCue* FullyChargedFireSound;
    
    UPROPERTY(EditAnywhere)
    float ChargeSpeed;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    bool Charging;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float ChargeProgress;
    
    UPROPERTY(EditAnywhere)
    int32 ShotCostAtBelowFullCharge;
    
    UPROPERTY(EditAnywhere)
    int32 ShotCostAtFullCharge;
    
    UPROPERTY(EditAnywhere)
    bool ChargedShotsOnly;
    
    UPROPERTY(EditAnywhere)
    bool AutoFireWhenOverheated;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float TotalHeat;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CoolingRate;
    
    UPROPERTY(EditAnywhere)
    float HeatPerSecondWhileCharging;
    
    UPROPERTY(EditAnywhere)
    float HeatPerSecondWhenCharged;
    
    UPROPERTY(EditAnywhere)
    float HeatPerNormalShot;
    
    UPROPERTY(EditAnywhere)
    float HeatPerChargedShot;
    
    UFUNCTION(BlueprintCallable)
    void SetOverheated(bool isOverheated);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetIsCharging(bool isChargingValue);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RecieveChargeProgressChanged(float NewChargeProgress);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveOverheatedChanged(bool isOverheated);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsCharging() const;
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    AChargedWeapon();
};

