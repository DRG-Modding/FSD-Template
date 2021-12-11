#pragma once
#include "CoreMinimal.h"
#include "SimpleMovingEnemyAnimInstance.h"
#include "FlyingBugAnimInstance.generated.h"

UCLASS(NonTransient)
class UFlyingBugAnimInstance : public USimpleMovingEnemyAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool IsInAttackMode;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool IsStaggered;
    
public:
    UFlyingBugAnimInstance();
};

