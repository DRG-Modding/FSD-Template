#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AmmoDrivenWeapon.h"
#include "Curves/CurveFloat.h"
#include "AutoCannon.generated.h"

class UStatusEffect;
class UAnimMontage;

UCLASS(Abstract, Blueprintable)
class AAutoCannon : public AAmmoDrivenWeapon {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float StartingFireRate;
    
    UPROPERTY(EditAnywhere)
    float MaxFireRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve FireRateCurve;
    
    UPROPERTY(EditAnywhere)
    float FireTimeReductionScale;
    
    UPROPERTY(EditAnywhere)
    float FireTimeIncreaseScale;
    
    UPROPERTY(EditAnywhere)
    float MaxFireTimeCap;
    
    UPROPERTY(EditAnywhere)
    float DamageBonusAtFullROF;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool StatusEffectAtFullROF;
    
    UPROPERTY(EditAnywhere)
    float FireTimeOffsetForMaxRateOfFireBonus;
    
    UPROPERTY(EditAnywhere)
    float StartLoopingSoundAt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UStatusEffect> StatusAtFullROF;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* WPN_Fire_2;
    
    UPROPERTY(EditAnywhere)
    float CurrentFireTime;
    
public:
    AAutoCannon();
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetStatusActive(bool IsActive);
    
};

