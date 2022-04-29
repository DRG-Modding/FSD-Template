#pragma once
#include "CoreMinimal.h"
#include "EnemyAnimInstance.h"
#include "FacilityTentacleHeadAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class UFacilityTentacleHeadAnimInstance : public UEnemyAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool Searching;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool Melee;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool RangedAttack;
    
public:
    UFacilityTentacleHeadAnimInstance();
};

