#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AmmoDrivenWeapon.h"
#include "Curves/CurveFloat.h"
#include "AutoCannon.generated.h"

class UStatusEffect;
class UAnimMontage;

UCLASS(Abstract)
class AAutoCannon : public AAmmoDrivenWeapon {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float StartingFireRate;
    
    UPROPERTY(EditAnywhere)
    float MaxFireRate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRuntimeFloatCurve FireRateCurve;
    
    UPROPERTY(EditAnywhere)
    float FireTimeReductionScale;
    
    UPROPERTY(EditAnywhere)
    float FireTimeIncreaseScale;
    
    UPROPERTY(EditAnywhere)
    float MaxFireTimeCap;
    
    UPROPERTY(EditAnywhere)
    float DamageBonusAtFullROF;
    
    UPROPERTY(EditAnywhere)
    bool StatusEffectAtFullROF;
    
    UPROPERTY(EditAnywhere)
    float FireTimeOffsetForMaxRateOfFireBonus;
    
    UPROPERTY(EditAnywhere)
    float StartLoopingSoundAt;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UStatusEffect> StatusAtFullROF;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* WPN_Fire_2;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CurrentFireTime;
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetStatusActive(bool IsActive);
    
public:
    AAutoCannon();
};

