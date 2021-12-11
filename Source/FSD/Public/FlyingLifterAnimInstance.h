#pragma once
#include "CoreMinimal.h"
#include "SimpleMovingEnemyAnimInstance.h"
#include "EGrabberState.h"
#include "FlyingLifterAnimInstance.generated.h"

UCLASS(NonTransient)
class UFlyingLifterAnimInstance : public USimpleMovingEnemyAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    bool HasGrabbedPlayer;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool ToChaseLock;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool ChaseToWanderLock;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool ToCarryLock;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    EGrabberState GrabberState;
    
public:
    UFlyingLifterAnimInstance();
};

