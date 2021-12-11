#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "EnemyMeleeAttackAnimNotify.generated.h"

UCLASS(CollapseCategories)
class UEnemyMeleeAttackAnimNotify : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FName AttackTag;
    
public:
    UEnemyMeleeAttackAnimNotify();
};

