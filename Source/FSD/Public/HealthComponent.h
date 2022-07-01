#pragma once
#include "CoreMinimal.h"
#include "HealthComponentBase.h"
#include "ArmorHealedSigDelegate.h"
#include "HealthChangedSigDelegate.h"
#include "HealthSegmentChangeDelegate.h"
#include "DamageSigDelegate.h"
#include "DeathSigDetailedDelegate.h"
#include "EHealthbarType.h"
#include "DamageData.h"
#include "HealthComponent.generated.h"

class UPawnStat;
class UPawnStatsComponent;
class USubHealthComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UHealthComponent : public UHealthComponentBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHealthChangedSig OnArmorChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDamageSig OnArmorDamaged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FArmorHealedSig OnArmorHealed;
    
    UPROPERTY(BlueprintAssignable, BlueprintAuthorityOnly, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDeathSigDetailed OnDeathDetailed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHealthSegmentChange OnNewHealthSegment;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Damage, meta=(AllowPrivateAccess=true))
    float Damage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> HealthSegmentSizes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanDamageThroughSegments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TArray<USubHealthComponent*> SubHealthComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShouldUseLargestSubhealthDamageTaken;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool InvulnerableToNonDefinedResistances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UPawnStat*, float> Resistances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AffectedByGlobalWeakpointDamageMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseDormancy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UPawnStatsComponent* PawnStats;
    
public:
    UHealthComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ToggleCanTakeDamage();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Resupply(float percentage);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_Damage(float oldDamage);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void HealArmor(float Amount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasArmor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxArmor() const;
    
    /*UFUNCTION(BlueprintCallable, BlueprintPure)
    EHealthbarType GetHealthbarType() const;*/
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCurrentHealthSegment(int32& Segment, float& segmentHealth, float& segmentHealthPercent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetArmorPct() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetArmor() const;
    
protected:
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void Client_ReceivedHit(float Amount, const FDamageData& DamageData, bool anyHealthLost);
    
};

