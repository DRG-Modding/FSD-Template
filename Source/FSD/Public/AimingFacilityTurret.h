#pragma once
#include "CoreMinimal.h"
#include "FacilityTurret.h"
#include "EIndicatorMode.h"
#include "UObject/NoExportTypes.h"
#include "AimingFacilityTurret.generated.h"

class UParticleSystemComponent;

UCLASS(Blueprintable)
class AAimingFacilityTurret : public AFacilityTurret {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_IsLockedOn, meta=(AllowPrivateAccess=true))
    bool IsLockedOn;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* aimIndicator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* aimIndicatorLock;
    
    UPROPERTY(EditAnywhere)
    float LockOnTime;
    
    UPROPERTY(EditAnywhere)
    float BurstInterval;
    
    UPROPERTY(EditAnywhere)
    float FireInterval;
    
    UPROPERTY(EditAnywhere)
    float TurretRotationSpeed;
    
    UPROPERTY(EditAnywhere)
    float InitialLockonDelay;
    
    UPROPERTY(EditAnywhere)
    float RegainLosLockonModifier;
    
    UPROPERTY(EditAnywhere)
    float AimZOffset;
    
    UPROPERTY(EditAnywhere)
    float TargetLeadingStrength;
    
    UPROPERTY(EditAnywhere)
    float TargetLeadingResponsiveness;
    
    UPROPERTY(EditAnywhere)
    float RaimainAfterShotTime;
    
    UPROPERTY(EditAnywhere)
    float TargetLeadingAfterLockonMultiplier;
    
    UPROPERTY(EditAnywhere)
    float TurningSpeedAfterLockOnMultipier;
    
    UPROPERTY(EditAnywhere)
    float PreLockonTargetChangeChance;
    
    UPROPERTY(EditAnywhere)
    float PreLockongTargetChangeRate;
    
    UPROPERTY(EditAnywhere)
    float IndicatorFlashTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool TrackTargetAfterLockon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ConstantAimAfterLock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseTraceForLockOn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_IndicatorMode, meta=(AllowPrivateAccess=true))
    EIndicatorMode IndicatorMode;
    
    UPROPERTY(EditAnywhere)
    FInt32Interval BurstCount;
    
public:
    AAimingFacilityTurret();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetupAimindicator(UParticleSystemComponent* NewAimIndicator, UParticleSystemComponent* NewAimIndicatorLock);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_IsLockedOn();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IndicatorMode();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLockedOn(bool lockedOn);
    
};

