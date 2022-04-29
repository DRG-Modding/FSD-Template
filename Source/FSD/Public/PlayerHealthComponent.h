#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "HealthComponent.h"
#include "RejoinListener.h"
#include "FullHealthSignatureDelegate.h"
#include "HealthRegeneratingChangedDelegate.h"
#include "HitSigDelegate.h"
#include "HealthRegenerationParams.h"
#include "AudioWithCooldown.h"
#include "PlayerHealthComponent.generated.h"

class APlayerCharacter;
class UCurveFloat;
class UParticleSystem;
class UParticleSystemComponent;
class UPlayerDamageTakenMutator;
class UStatusEffect;
class AController;
class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPlayerHealthComponent : public UHealthComponent, public IRejoinListener {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFullHealthSignature OnFullHealthCannotHeal;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFullHealthSignature OnHealedFromCrystalEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHealthRegeneratingChanged OnHealthRegeneratingChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitSig OnPlayerHit;
    
protected:
    UPROPERTY(EditAnywhere, ReplicatedUsing=OnRep_MaxHealth)
    float MaxHealth;
    
    UPROPERTY(EditAnywhere, ReplicatedUsing=OnRep_MaxArmor)
    float MaxArmor;
    
    UPROPERTY(EditAnywhere, Transient, ReplicatedUsing=OnRep_ArmorDamage)
    float ArmorDamage;
    
    UPROPERTY(EditAnywhere)
    float ReviveHealthReturnRatio;
    
    UPROPERTY(EditAnywhere)
    float ReviveArmorReturnRatio;
    
    UPROPERTY(EditAnywhere)
    float HealthPerCrystalVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHealthRegenerationParams HealthRegeneration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* ArmorRegenCurve;
    
    UPROPERTY(EditAnywhere)
    float ShieldRegenDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APlayerCharacter* Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* GenericImpactParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* ShieldLinkEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAudioWithCooldown AudioFriendlyFire;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* ShieldLinkInstance;
    
    UPROPERTY(EditAnywhere)
    float InvulnerabilityDuration;
    
    UPROPERTY(EditAnywhere)
    float ReviveInvulnerabilityTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPlayerDamageTakenMutator* DamageTakenMutator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UStatusEffect> IronWillStatusEffectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UStatusEffect* IronWillStatusEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool IronWillActive;
    
    UPROPERTY(EditAnywhere)
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
    
    UFUNCTION()
    void OnRep_ArmorDamage(float oldDamage);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLowHealth() const;
    
    UFUNCTION(BlueprintPure)
    float GetRemainingIronWillActivationTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsHealthRegenerating() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIronWillActive() const;
    
    UFUNCTION(BlueprintPure)
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

