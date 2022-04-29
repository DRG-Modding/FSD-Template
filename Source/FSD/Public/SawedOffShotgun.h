#pragma once
#include "CoreMinimal.h"
#include "AmmoDrivenWeapon.h"
#include "SawedOffShotgun.generated.h"

class UDamageComponent;

UCLASS(Blueprintable)
class ASawedOffShotgun : public AAmmoDrivenWeapon {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UDamageComponent* DamageComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UDamageComponent* ShockWaveDamageComponent;
    
    UPROPERTY(EditAnywhere)
    float FearFactorOnFire;
    
    UPROPERTY(EditAnywhere)
    float FearFactorOnFireRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShotgunJumpEnabled;
    
    UPROPERTY(EditAnywhere)
    float ShotgunJumpForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShockwaveEnabled;
    
    UPROPERTY(EditAnywhere)
    float ShockWaveDistance;
    
    UPROPERTY(EditAnywhere)
    float ShockWaveRadius;
    
    UPROPERTY(EditAnywhere)
    float ShockWaveLength;
    
public:
    ASawedOffShotgun();
protected:
    UFUNCTION(BlueprintCallable)
    void SetShockWaveDamageComponent(UDamageComponent* Component);
    
};

