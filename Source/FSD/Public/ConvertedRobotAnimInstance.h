#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "ConvertedRobotAnimInstance.generated.h"

UCLASS(NonTransient)
class UConvertedRobotAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool HasIntroduced;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool IsWalking;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool IsIntroducing;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool ShouldSit;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool StopSit;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool ShouldCollapse;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool IsPoweredDown;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float WalkingRate;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float NormalWalkSpeed;
    
public:
    UConvertedRobotAnimInstance();
};

