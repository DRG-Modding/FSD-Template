#pragma once
#include "CoreMinimal.h"
#include "HealthComponentBase.h"
#include "EHealthbarType.h"
#include "HealthComponent.generated.h"

class UFSDPhysicalMaterial;
class AController;
class AActor;
class UDamageTag;
class UHealthComponent;
class UDamageClass;
class USubHealthComponent;
class UPawnStat;
class UPawnStatsComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHealthComponentOnArmorChanged, float, Health);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_EightParams(FHealthComponentOnDeathDetailed, UHealthComponent*, HealthComponent, float, damageAmount, UDamageClass*, DamageClass, AActor*, damageCause, AController*, Instigator, UFSDPhysicalMaterial*, PhysicalMaterial, bool, IsRadial, const TArray<UDamageTag*>&, Tags);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHealthComponentOnArmorDamaged, float, Amount);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHealthComponentOnArmorHealed, float, Amount);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FHealthComponentOnNewHealthSegment, int32, currSegment, int32, prevSegment);

UCLASS()
class UHealthComponent : public UHealthComponentBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FHealthComponentOnArmorChanged OnArmorChanged;
    
    UPROPERTY(BlueprintAssignable)
    FHealthComponentOnArmorDamaged OnArmorDamaged;
    
    UPROPERTY(BlueprintAssignable)
    FHealthComponentOnArmorHealed OnArmorHealed;
    
    UPROPERTY(BlueprintAssignable, BlueprintAuthorityOnly)
    FHealthComponentOnDeathDetailed OnDeathDetailed;
    
    UPROPERTY(BlueprintAssignable)
    FHealthComponentOnNewHealthSegment OnNewHealthSegment;
    
protected:
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_Damage)
    float Damage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<float> HealthSegmentSizes;
    
    UPROPERTY(EditAnywhere)
    bool CanDamageThroughSegments;
    
    UPROPERTY(Export, Transient)
    TArray<USubHealthComponent*> SubHealthComponents;
    
    UPROPERTY(EditAnywhere)
    bool ShouldUseLargestSubhealthDamageTaken;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool InvulnerableToNonDefinedResistances;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<UPawnStat*, float> Resistances;
    
    UPROPERTY(EditAnywhere)
    bool AffectedByGlobalWeakpointDamageMultiplier;
    
    UPROPERTY(EditAnywhere)
    bool UseDormancy;
    
    UPROPERTY(Export, Transient)
    UPawnStatsComponent* PawnStats;
    
public:
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
    void Client_ReceivedHit(float Amount, UDamageClass* DamageClass, AActor* DamageCauser, bool anyHealthLost);
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UHealthComponent();
};

