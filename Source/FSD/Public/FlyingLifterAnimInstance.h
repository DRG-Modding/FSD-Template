#pragma once
#include "CoreMinimal.h"
#include "SimpleMovingEnemyAnimInstance.h"
#include "EGrabberState.h"
#include "FlyingLifterAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class UFlyingLifterAnimInstance : public USimpleMovingEnemyAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool HasGrabbedPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool ToChaseLock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool ChaseToWanderLock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool ToCarryLock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EGrabberState GrabberState;
    
public:
    UFlyingLifterAnimInstance();
};

