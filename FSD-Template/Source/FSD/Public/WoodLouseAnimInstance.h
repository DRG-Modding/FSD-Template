#pragma once
#include "CoreMinimal.h"
#include "SpiderAnimInstance.h"
#include "UObject/NoExportTypes.h"
#include "EWoodLouseState.h"
#include "WoodLouseAnimInstance.generated.h"

UCLASS(NonTransient)
class UWoodLouseAnimInstance : public USpiderAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    FVector2D AngleToTarget;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float InterpSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BreakRollingWhenTimeLeft;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    EWoodLouseState RollerState;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool IsWalking;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool IsUpRight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool IsDoingSpecialAttack;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool IsUnFolded;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool IsGroundValid;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool IsInRollState;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool IdleToDownTurnLeftLock;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool DownTurnLeftToIdleLock;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool DownWalkToDownTurnLeftLock;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool WoodlouseWalk;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool IdleToDownWalkLock;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool DownWalkToDownTurnRightLock;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool IdleToDownTurnRightLock;
    
public:
    UWoodLouseAnimInstance();
};

