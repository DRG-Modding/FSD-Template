#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Engine/DataAsset.h"
#include "Curves/CurveFloat.h"
#include "DecalData.h"
#include "DamageSettings.generated.h"

class UDamageComponent;
class UStatusEffect;
class UNiagaraSystem;
class USoundCue;
class UDamageTag;

UCLASS()
class UDamageSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float TemperatureChangePerColdDamagePoint;
    
    UPROPERTY(EditAnywhere)
    float TemperatureChangePerIceDamagePoint;
    
    UPROPERTY(EditAnywhere)
    float TemperatureChangePerHeatDamagePoint;
    
    UPROPERTY(EditAnywhere)
    float TemperatureChangePerFireDamagePoint;
    
    UPROPERTY(EditAnywhere)
    float TemperatureShockActivationWindow;
    
    UPROPERTY(EditAnywhere)
    float FrozenDamageBonus;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UStatusEffect> EnemyOnFireStatusEffect;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UStatusEffect> PlayerOnFireStatusEffect;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UStatusEffect> TemperatureShockFromFrozenStatusEffect;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UStatusEffect> TemperatureShockFromBurningStatusEffect;
    
    UPROPERTY(EditAnywhere, Instanced)
    UDamageComponent* ArmorShatterDamage;
    
    UPROPERTY(EditAnywhere)
    UNiagaraSystem* ArmorShatterEmitter;
    
    UPROPERTY(EditAnywhere)
    USoundCue* ArmorShatterSound;
    
    UPROPERTY(EditAnywhere, EditFixedSize)
    TArray<FDecalData> ImpactDecals;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve ArmorToArmorDamageBreakingCurve;
    
    UPROPERTY(EditAnywhere)
    UDamageTag* DetonateFrozen;
    
    UPROPERTY(EditAnywhere)
    UDamageTag* DetonateOnFire;
    
    UPROPERTY(EditAnywhere)
    UDamageTag* DirectHit;
    
    UPROPERTY(EditAnywhere)
    UDamageTag* MeltTarget;
    
    UPROPERTY(EditAnywhere)
    UDamageTag* IgnoreBodypartDamageReduction;
    
    UDamageSettings();
};

