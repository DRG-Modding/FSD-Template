#pragma once
#include "CoreMinimal.h"
#include "HealthChangedSigDelegate.h"
#include "HealthComponentBase.h"
#include "DamageSigDelegate.h"
#include "ArmorHealedSigDelegate.h"
#include "DeathSigDetailedDelegate.h"
#include "HealthSegmentChangeDelegate.h"
#include "EHealthbarType.h"
#include "DamageData.h"
#include "HealthComponent.generated.h"

class USubHealthComponent;
class UPawnStat;
class UPawnStatsComponent;

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
    UPROPERTY(EditAnywhere, Transient, ReplicatedUsing=OnRep_Damage)
    float Damage;
    
    UPROPERTY(EditAnywhere)
    TArray<float> HealthSegmentSizes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanDamageThroughSegments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TArray<USubHealthComponent*> SubHealthComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShouldUseLargestSubhealthDamageTaken;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool InvulnerableToNonDefinedResistances;
    
    UPROPERTY(EditAnywhere)
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
    UFUNCTION()
    void OnRep_Damage(float oldDamage);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void HealArmor(float Amount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasArmor() const;
    
    UFUNCTION(BlueprintPure)
    float GetMaxArmor() const;
    
    /*UFUNCTION(BlueprintCallable, BlueprintPure)*/
    EHealthbarType GetHealthbarType() const;
    
    UFUNCTION(BlueprintPure)
    void GetCurrentHealthSegment(int32& Segment, float& segmentHealth, float& segmentHealthPercent);
    
    UFUNCTION(BlueprintPure)
    float GetArmorPct() const;
    
    UFUNCTION(BlueprintPure)
    float GetArmor() const;
    
protected:
    UFUNCTION(Client, Unreliable)
    void Client_ReceivedHit(float Amount, const FDamageData& DamageData, bool anyHealthLost);
    
};

