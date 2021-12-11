#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "HealthComponent.h"
#include "RejoinListener.h"
#include "HealthRegenerationParams.h"
#include "AudioWithCooldown.h"
#include "PlayerHealthComponent.generated.h"

class AActor;
class APlayerCharacter;
class UDamageClass;
class UCurveFloat;
class UParticleSystem;
class UParticleSystemComponent;
class UPlayerDamageTakenMutator;
class UStatusEffect;
class AController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FPlayerHealthComponentOnPlayerHit, float, Damage, UDamageClass*, DamageClass, AActor*, DamageCauser, bool, anyHealthLost);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPlayerHealthComponentOnFullHealthCannotHeal);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPlayerHealthComponentOnHealedFromCrystalEvent);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerHealthComponentOnHealthRegeneratingChanged, bool, isRegenerating);

UCLASS()
class UPlayerHealthComponent : public UHealthComponent, public IRejoinListener {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FPlayerHealthComponentOnFullHealthCannotHeal OnFullHealthCannotHeal;
    
    UPROPERTY(BlueprintAssignable)
    FPlayerHealthComponentOnHealedFromCrystalEvent OnHealedFromCrystalEvent;
    
    UPROPERTY(BlueprintAssignable)
    FPlayerHealthComponentOnHealthRegeneratingChanged OnHealthRegeneratingChanged;
    
    UPROPERTY(BlueprintAssignable)
    FPlayerHealthComponentOnPlayerHit OnPlayerHit;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, ReplicatedUsing=OnRep_MaxHealth)
    float MaxHealth;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, ReplicatedUsing=OnRep_MaxArmor)
    float MaxArmor;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_ArmorDamage)
    float ArmorDamage;
    
    UPROPERTY(EditAnywhere)
    float ReviveHealthReturnRatio;
    
    UPROPERTY(EditAnywhere)
    float ReviveArmorReturnRatio;
    
    UPROPERTY(EditAnywhere)
    float HealthPerCrystalVolume;
    
    UPROPERTY(EditAnywhere)
    FHealthRegenerationParams HealthRegeneration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UCurveFloat* ArmorRegenCurve;
    
    UPROPERTY(EditAnywhere)
    float ShieldRegenDelay;
    
    UPROPERTY(Transient)
    APlayerCharacter* Character;
    
    UPROPERTY(EditAnywhere)
    UParticleSystem* GenericImpactParticles;
    
    UPROPERTY(EditAnywhere)
    UParticleSystem* ShieldLinkEffect;
    
    UPROPERTY(EditAnywhere)
    FAudioWithCooldown AudioFriendlyFire;
    
    UPROPERTY(Export, Transient)
    UParticleSystemComponent* ShieldLinkInstance;
    
    UPROPERTY(EditAnywhere)
    float InvulnerabilityDuration;
    
    UPROPERTY(EditAnywhere)
    float ReviveInvulnerabilityTime;
    
    UPROPERTY(Transient)
    UPlayerDamageTakenMutator* DamageTakenMutator;
    
    UPROPERTY(Transient)
    TSubclassOf<UStatusEffect> IronWillStatusEffectClass;
    
    UPROPERTY(Transient)
    UStatusEffect* IronWillStatusEffect;
    
    UPROPERTY(Replicated, Transient)
    bool IronWillActive;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float IronWillTimeToActivate;
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    UStatusEffect* SetIronWillStatusEffect(TSubclassOf<UStatusEffect> steClass);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_TryActivateIronWill();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_MaxHealth();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MaxArmor();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ArmorDamage(float oldDamage);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLowHealth() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRemainingIronWillActivationTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsHealthRegenerating() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIronWillActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHealthRegeneratingTargetRatio() const;
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable, WithValidation)
    void Client_SetHealthRegenerating(bool isRegenerating);
    
    UFUNCTION(BlueprintCallable, Client, Unreliable, WithValidation)
    void Client_OnFriendlyFire(AController* EventInstigator, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable, Client, Reliable, WithValidation)
    void Client_HealthFullCannotHeal();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanActivateIronWill() const;
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UPlayerHealthComponent();
    
    // Fix for true pure virtual functions not being implemented
};

