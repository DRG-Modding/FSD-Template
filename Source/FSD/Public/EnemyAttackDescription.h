#pragma once
#include "CoreMinimal.h"
#include "EEnemyAttackType.h"
#include "EDamageType.h"
#include "EnemyAttackDescription.generated.h"

USTRUCT(BlueprintType)
struct FEnemyAttackDescription {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEnemyAttackType range;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDamageType DamageType;
    
    FSD_API FEnemyAttackDescription();
};

