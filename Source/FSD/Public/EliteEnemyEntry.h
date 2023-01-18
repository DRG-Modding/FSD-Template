#pragma once
#include "CoreMinimal.h"
#include "EEnemyHealthScaling.h"
#include "EliteEnemyBan.h"
#include "Templates/SubclassOf.h"
#include "EliteEnemyEntry.generated.h"

class UActorComponent;
class UStatusEffect;

USTRUCT(BlueprintType)
struct FEliteEnemyEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeroChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UStatusEffect> StatusEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UActorComponent>> ComponentsToAdd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool OverrideHealthScaling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEliteEnemyBan> Bans;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEnemyHealthScaling HealthScalingOverride;
    
    FSD_API FEliteEnemyEntry();
};

