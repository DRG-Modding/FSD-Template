#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "EnemyMeleeAttackAnimNotify.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UEnemyMeleeAttackAnimNotify : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttackTag;
    
public:
    UEnemyMeleeAttackAnimNotify();
};

