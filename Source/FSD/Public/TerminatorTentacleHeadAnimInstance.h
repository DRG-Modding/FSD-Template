#pragma once
#include "CoreMinimal.h"
#include "EnemyAnimInstance.h"
#include "TerminatorTentacleHeadAnimInstance.generated.h"

UCLASS(NonTransient)
class UTerminatorTentacleHeadAnimInstance : public UEnemyAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool Idle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool Grabbing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool Grabbed;
    
public:
    UTerminatorTentacleHeadAnimInstance();
};

