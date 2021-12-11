#pragma once
#include "CoreMinimal.h"
#include "AmmoDrivenWeapon.h"
#include "SawedOffShotgun.generated.h"

class UDamageComponent;

UCLASS()
class ASawedOffShotgun : public AAmmoDrivenWeapon {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export, VisibleAnywhere)
    UDamageComponent* DamageComponent;
    
    UPROPERTY(Export, VisibleAnywhere)
    UDamageComponent* ShockWaveDamageComponent;
    
    UPROPERTY(EditAnywhere)
    float FearFactorOnFire;
    
    UPROPERTY(EditAnywhere)
    float FearFactorOnFireRadius;
    
    UPROPERTY(EditAnywhere)
    bool ShotgunJumpEnabled;
    
    UPROPERTY(EditAnywhere)
    float ShotgunJumpForce;
    
    UPROPERTY(EditAnywhere)
    bool ShockwaveEnabled;
    
    UPROPERTY(EditAnywhere)
    float ShockWaveDistance;
    
    UPROPERTY(EditAnywhere)
    float ShockWaveRadius;
    
    UPROPERTY(EditAnywhere)
    float ShockWaveLength;
    
    UFUNCTION(BlueprintCallable)
    void SetShockWaveDamageComponent(UDamageComponent* Component);
    
public:
    ASawedOffShotgun();
};

