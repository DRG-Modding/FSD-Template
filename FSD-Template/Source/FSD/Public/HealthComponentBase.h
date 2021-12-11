#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Health.h"
#include "UObject/NoExportTypes.h"
#include "EHealthbarType.h"
#include "HealthComponentBase.generated.h"

class UDamageClass;
class AActor;
class UPrimitiveComponent;
class UHealthComponentBase;
class UFSDPhysicalMaterial;
class AController;
class UParticleSystem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHealthComponentBaseOnCanTakeDamageChanged, bool, OutCanTakeDamage);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHealthComponentBaseOnDamageTaken, float, Amount);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHealthComponentBaseOnHealthChanged, float, Health);
UDELEGATE(BlueprintAuthorityOnly, BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FHealthComponentBaseOnBodypartHit, float, Amount, float, BaseAmount, UPrimitiveComponent*, Component, UFSDPhysicalMaterial*, PhysMat, const FName&, BoneName);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHealthComponentBaseOnDamageHealed, float, Amount);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FHealthComponentBaseOnHit, float, Damage, UDamageClass*, DamageClass, AActor*, DamageCauser, bool, anyHealthLost);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHealthComponentBaseOnDeath, UHealthComponentBase*, HealthComponent);
UDELEGATE(BlueprintAuthorityOnly, BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FHealthComponentBaseOnRadialDamage, float, Damage, float, BaseDamage, const FVector&, Position, float, Radius);

UCLASS(Abstract, BlueprintType)
class UHealthComponentBase : public UActorComponent, public IHealth {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FHealthComponentBaseOnHealthChanged OnHealthChanged;
    
    UPROPERTY(BlueprintAssignable)
    FHealthComponentBaseOnDamageHealed OnDamageHealed;
    
    UPROPERTY(BlueprintAssignable)
    FHealthComponentBaseOnDamageTaken OnDamageTaken;
    
    UPROPERTY(BlueprintAssignable)
    FHealthComponentBaseOnHit OnHit;
    
    UPROPERTY(BlueprintAssignable)
    FHealthComponentBaseOnBodypartHit OnBodypartHit;
    
    UPROPERTY(BlueprintAssignable)
    FHealthComponentBaseOnDeath OnDeath;
    
    UPROPERTY(BlueprintAssignable)
    FHealthComponentBaseOnRadialDamage OnRadialDamage;
    
    UPROPERTY(BlueprintAssignable)
    FHealthComponentBaseOnCanTakeDamageChanged OnCanTakeDamageChanged;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool ShowLaserPointMarkerWhenDead;
    
    UPROPERTY(EditAnywhere)
    bool canTakeDamage;
    
    UPROPERTY(EditAnywhere)
    bool PassthroughTemperatureDamage;
    
public:
    UFUNCTION(BlueprintCallable)
    float TakeRadialDamage(float damageAmount, FVector BlastCenter, float BlastRadius, float MaxDamageRadius, float MinDamagePct, AController* EventInstigator, AActor* DamageCauser, UPrimitiveComponent* HitComponent, UDamageClass* DamageClass);
    
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
    
    UHealthComponentBase();
    
    // Fix for true pure virtual functions not being implemented
    /*UFUNCTION(BlueprintCallable)
    AActor* GetOwner() const override PURE_VIRTUAL(GetOwner, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    float GetMaxHealth() const override PURE_VIRTUAL(GetMaxHealth, return 0.0f;);
    
    UFUNCTION(BlueprintCallable)
    EHealthbarType GetHealthbarType() const override PURE_VIRTUAL(GetHealthbarType, return EHealthbarType::None;);*/
    
};

