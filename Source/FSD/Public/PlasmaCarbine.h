#pragma once
#include "CoreMinimal.h"
#include "AmmoDrivenWeapon.h"
#include "PlasmaCarbine.generated.h"

class UAnimMontage;

UCLASS(Abstract)
class APlasmaCarbine : public AAmmoDrivenWeapon {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float RateOfFireBoostOnFullShield;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool RemoveShieldOnOverheat;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool RemoveShieldOnReload;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeatEffectsThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* FP_CharacterOverheatEndMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* TP_CharacterOverheatEndMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* WPN_ItemOverheatEndMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* FP_CharacterReloadEndMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* TP_CharacterReloadEndMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* WPN_ItemReloadEndMontage;
    
public:
    APlasmaCarbine();
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ApplyShieldDamage();
    
};

