#pragma once
#include "CoreMinimal.h"
#include "HealthChangedSigDelegate.h"
#include "Components/ActorComponent.h"
#include "Health.h"
#include "HitSigDelegate.h"
#include "BodypartHitSigDelegate.h"
#include "DamageSigDelegate.h"
#include "DeathSigDelegate.h"
#include "OnRadialDamageDelegate.h"
#include "UObject/NoExportTypes.h"
#include "DamageData.h"
#include "EHealthbarType.h"
#include "HealthComponentBase.generated.h"

class AActor;
class UDamageClass;
class UPrimitiveComponent;
class UParticleSystem;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UHealthComponentBase : public UActorComponent, public IHealth {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCanTakeDamageDelegate, bool, OutCanTakeDamage);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHealthChangedSig OnHealthChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDamageSig OnDamageHealed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDamageSig OnDamageTaken;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitSig OnHit;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBodypartHitSig OnBodypartHit;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDeathSig OnDeath;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRadialDamage OnRadialDamage;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCanTakeDamageDelegate OnCanTakeDamageChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowLaserPointMarkerWhenDead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool canTakeDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PassthroughTemperatureDamage;
    
public:
    UHealthComponentBase();
    UFUNCTION(BlueprintCallable)
    float TakeRadialDamage(float damageAmount, FVector BlastCenter, float BlastRadius, float MaxDamageRadius, float MinDamagePct, FDamageData& DamageData);
    
    UFUNCTION(BlueprintCallable)
    void TakeDamageSimple(float damageAmount, AActor* DamageCauser, UDamageClass* DamageClass);
    
    UFUNCTION(BlueprintCallable)
    void SetHealthDirectly(float newHealthValue);
    
    UFUNCTION(BlueprintCallable)
    void SetCanTakeDamage(bool NewCanTakeDamage);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Kill(AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDead() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAlive() const;
    
    UFUNCTION(BlueprintCallable)
    float Heal(float Amount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetShowHealthBar() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHealthPct() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TScriptInterface<IHealth> GetHealthComponentForCollider(UPrimitiveComponent* Primitive) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetHealthBarWorldOffset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHealth() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UParticleSystem* GetGenericImpactParticles() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCanTakeDamage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanTakeDamageFrom(UDamageClass* DamageClass) const;
    
    
    // Fix for true pure virtual functions not being implemented
    /*UFUNCTION(BlueprintCallable)
    AActor* GetOwner() const override PURE_VIRTUAL(GetOwner, return NULL;);*/
    
    UFUNCTION(BlueprintCallable)
    float GetMaxHealth() const override PURE_VIRTUAL(GetMaxHealth, return 0.0f;);
    
    UFUNCTION(BlueprintCallable)
    EHealthbarType GetHealthbarType() const override PURE_VIRTUAL(GetHealthbarType, return EHealthbarType::None;);
    
};

