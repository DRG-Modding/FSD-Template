#pragma once
#include "CoreMinimal.h"
#include "HostileTargetingGuntowerModule.h"
#include "UObject/NoExportTypes.h"
#include "LMGGuntoweModule.generated.h"

class UDamageComponent;
class UHitscanComponent;
class USceneComponent;
class USoundCue;
class UAudioComponent;
class UParticleSystem;

UCLASS()
class ALMGGuntoweModule : public AHostileTargetingGuntowerModule {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UHitscanComponent* HitScanComp;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UDamageComponent* DamageComp;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USceneComponent* AimAtWhenNoTarget;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UAudioComponent* FireAudio;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UParticleSystem* TracerEffect;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UParticleSystem* MuzzleEffect;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundCue* ShootTailSound;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 BurstSize;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxAimOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float IdleAimRotationSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TimeBetweenShots;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TimeBetweenBursts;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float AimSpeed;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_IsFiresoundPlaying)
    bool IsFiresoundPlaying;
    
    UFUNCTION(BlueprintCallable)
    void ShowShot(const FVector& Location);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsFiresoundPlaying();
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    ALMGGuntoweModule();
};

