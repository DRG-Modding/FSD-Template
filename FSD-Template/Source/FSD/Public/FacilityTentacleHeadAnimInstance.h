#pragma once
#include "CoreMinimal.h"
#include "EnemyAnimInstance.h"
#include "FacilityTentacleHeadAnimInstance.generated.h"

UCLASS(NonTransient)
class UFacilityTentacleHeadAnimInstance : public UEnemyAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool Searching;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool Melee;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool RangedAttack;
    
public:
    UFacilityTentacleHeadAnimInstance();
};

