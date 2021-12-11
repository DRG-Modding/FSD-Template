#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "RandRange.h"
#include "GameplayTagContainer.h"
#include "StatusEffect.generated.h"

class UStatusEffectItem;
class UPawnAffliction;
class UStatusEffectExclusiveKey;
class UDamageClass;
class UStatusEffect;
class AActor;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UStatusEffect : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UPawnAffliction* PawnAffliction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    TArray<UStatusEffectItem*> StatusEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxResistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UDamageClass* DamageClass;
    
    UPROPERTY(EditAnywhere)
    UStatusEffectExclusiveKey* ExclusiveKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRandRange ApplyEffectsInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool CanStack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool ApplyDurationAfterPop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool RemoveOnDeath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool RemoveOnTemperatureStateChange;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagQuery GameplayTagQuery;
    
    UPROPERTY(VisibleAnywhere)
    FGameplayTagContainer ExcludeTargetsWithTags;
    
    UPROPERTY(VisibleAnywhere)
    FGameplayTagContainer TargetRequiredTags;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldInstantiate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetStatusEffectDuration(TSubclassOf<UStatusEffect> StatusEffect);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanTrigger(AActor* Target) const;
    
    UStatusEffect();
};

