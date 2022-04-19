#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "HealthComponent.h"
#include "HealthRegenerationParams.h"
#include "RejoinListener.h"
#include "FullHealthSignatureDelegate.h"
#include "HealthRegeneratingChangedDelegate.h"
#include "HitSigDelegate.h"
#include "AudioWithCooldown.h"
#include "PlayerHealthComponent.generated.h"

class UCurveFloat;
class APlayerCharacter;
class UParticleSystem;
class UParticleSystemComponent;
class UPlayerDamageTakenMutator;
class UStatusEffect;
class AActor;
class AController;

UCLASS(meta=(BlueprintSpawnableComponent))
class UPlayerHealthComponent : public UHealthComponent, public IRejoinListener {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FFullHealthSignature OnFullHealthCannotHeal;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FFullHealthSignature OnHealedFromCrystalEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FHealthRegeneratingChanged OnHealthRegeneratingChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FHitSig OnPlayerHit;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MaxHealth, meta=(AllowPrivateAccess=true))
    float MaxHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MaxArmor, meta=(AllowPrivateAccess=true))
    float MaxArmor;
    
    UPROPERTY(BlueprintReadWrite, Transient, ReplicatedUsing=OnRep_ArmorDamage, meta=(AllowPrivateAccess=true))
    float ArmorDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReviveHealthReturnRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReviveArmorReturnRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealthPerCrystalVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHealthRegenerationParams HealthRegeneration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* ArmorRegenCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShieldRegenDelay;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    APlayerCharacter* Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* GenericImpactParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* ShieldLinkEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAudioWithCooldown AudioFriendlyFire;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* ShieldLinkInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InvulnerabilityDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReviveInvulnerabilityTime;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    UPlayerDamageTakenMutator* DamageTakenMutator;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UStatusEffect> IronWillStatusEffectClass;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    UStatusEffect* IronWillStatusEffect;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool IronWillActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IronWillTimeToActivate;
    
public:
    UPlayerHealthComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
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
    
    
    // Fix for true pure virtual functions not being implemented
};

