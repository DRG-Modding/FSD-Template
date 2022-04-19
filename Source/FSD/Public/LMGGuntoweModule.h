#pragma once
#include "CoreMinimal.h"
#include "HostileTargetingGuntowerModule.h"
#include "UObject/NoExportTypes.h"
#include "LMGGuntoweModule.generated.h"

class USoundCue;
class UParticleSystem;
class UAudioComponent;
class USceneComponent;
class UHitscanComponent;
class UDamageComponent;

UCLASS()
class ALMGGuntoweModule : public AHostileTargetingGuntowerModule {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UHitscanComponent* HitScanComp;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UDamageComponent* DamageComp;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USceneComponent* AimAtWhenNoTarget;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UAudioComponent* FireAudio;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* TracerEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* MuzzleEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* ShootTailSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BurstSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxAimOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IdleAimRotationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeBetweenShots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeBetweenBursts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimSpeed;
    
    UPROPERTY(BlueprintReadWrite, Transient, ReplicatedUsing=OnRep_IsFiresoundPlaying, meta=(AllowPrivateAccess=true))
    bool IsFiresoundPlaying;
    
public:
    ALMGGuntoweModule();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void ShowShot(const FVector& Location);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsFiresoundPlaying();
    
};

