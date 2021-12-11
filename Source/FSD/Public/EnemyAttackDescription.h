#pragma once
#include "CoreMinimal.h"
#include "EDamageType.h"
#include "EEnemyAttackType.h"
#include "EnemyAttackDescription.generated.h"

USTRUCT(BlueprintType)
struct FEnemyAttackDescription {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EEnemyAttackType range;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EDamageType DamageType;
    
    FSD_API FEnemyAttackDescription();
};

