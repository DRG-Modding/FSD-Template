#pragma once
#include "CoreMinimal.h"
#include "Mutator.h"
#include "DifficultyMutator.generated.h"

UCLASS(EditInlineNew)
class UDifficultyMutator : public UMutator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float ExtraLargeEnemyDamageResistanceMultiplier;
    
    UPROPERTY(EditAnywhere)
    float EnemyDamageResistanceMultiplier;
    
    UPROPERTY(EditAnywhere)
    float SmallEnemyDamageResistanceMultiplier;
    
    UPROPERTY(EditAnywhere)
    float EnemyDamageModifierMultiplier;
    
    UPROPERTY(EditAnywhere)
    float EnemyCountModifierMultiplier;
    
    UPROPERTY(EditAnywhere)
    float WeakpointDamageMultiplier;
    
    UPROPERTY(EditAnywhere)
    float HazardBonus;
    
    UPROPERTY(EditAnywhere)
    float FriendlyFireModifierMultiplier;
    
    UPROPERTY(EditAnywhere)
    float EnemyWaveIntervalModifier;
    
    UPROPERTY(EditAnywhere)
    float EnemyNormalWaveIntervalModifier;
    
    UPROPERTY(EditAnywhere)
    float EnemyNormalWaveDifficultyMultiplier;
    
    UPROPERTY(EditAnywhere)
    float ProjectileSpeedModifier;
    
    UPROPERTY(EditAnywhere)
    float AttackCooldownModifier;
    
    UPROPERTY(EditAnywhere)
    float SpeedModifier;
    
    UDifficultyMutator();
};

