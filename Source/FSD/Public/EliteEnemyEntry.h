#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EliteEnemyBan.h"
#include "EEnemyHealthScaling.h"
#include "EliteEnemyEntry.generated.h"

class UStatusEffect;
class UActorComponent;

USTRUCT(BlueprintType)
struct FEliteEnemyEntry {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float HeroChance;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UStatusEffect> StatusEffect;
    
    UPROPERTY(EditAnywhere)
    TArray<TSubclassOf<UActorComponent>> ComponentsToAdd;
    
    UPROPERTY(EditAnywhere)
    bool OverrideHealthScaling;
    
    UPROPERTY(EditAnywhere)
    TArray<FEliteEnemyBan> Bans;
    
    UPROPERTY(EditAnywhere)
    EEnemyHealthScaling HealthScalingOverride;
    
    FSD_API FEliteEnemyEntry();
};

