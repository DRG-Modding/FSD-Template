#pragma once
#include "CoreMinimal.h"
#include "EImpactDecalSize.h"
#include "WeaponFireComponent.h"
#include "Curves/CurveFloat.h"
#include "DelegateDelegate.h"
#include "SpreadChangedDelegateDelegate.h"
#include "ERicochetBehavior.h"
#include "HitscanBaseComponent.generated.h"

class UDamageComponent;
class UDamageClass;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UHitscanBaseComponent : public UWeaponFireComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpreadChangedDelegate OnSpreadChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegate OnFireComplete;
    
    UPROPERTY(EditAnywhere)
    float SpreadPerShot;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UDamageComponent* DamageComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseDamageComponent;
    
    UPROPERTY(EditAnywhere)
    float Damage;
    
    UPROPERTY(EditAnywhere)
    float ArmorDamageMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDamageClass* DamageClass;
    
    UPROPERTY(EditAnywhere)
    float WeakpointDamageMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxPenetrations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EImpactDecalSize ImpactDecalSize;
    
    UPROPERTY(EditAnywhere)
    float friendlyFireModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseDynamicSpread;
    
    UPROPERTY(EditAnywhere)
    float MinSpread;
    
    UPROPERTY(EditAnywhere)
    float MinSpreadWhenMoving;
    
    UPROPERTY(EditAnywhere)
    float MinSpreadWhenSprinting;
    
    UPROPERTY(EditAnywhere)
    float MaxSpread;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve SpreadCurve;
    
    UPROPERTY(EditAnywhere)
    float SpreadRecoveryPerSecond;
    
    UPROPERTY(EditAnywhere)
    float VerticalSpreadMultiplier;
    
    UPROPERTY(EditAnywhere)
    float HorizontalSpredMultiplier;
    
    UPROPERTY(EditAnywhere)
    float MaxVerticalSpread;
    
    UPROPERTY(EditAnywhere)
    float MaxHorizontalSpread;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERicochetBehavior RicochetBehavior;
    
    UPROPERTY(EditAnywhere)
    float RicochetChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RicochetOnWeakspotOnly;
    
    UPROPERTY(EditAnywhere)
    float RicochetMaxRange;
    
public:
    UHitscanBaseComponent();
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_StopFire();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_RemoveDebris(int32 instance, int32 Component);
    
public:
    UFUNCTION(BlueprintPure)
    float GetCurrentVerticalSpread() const;
    
    UFUNCTION(BlueprintPure)
    float GetCurrentHorizontalSpread() const;
    
};

