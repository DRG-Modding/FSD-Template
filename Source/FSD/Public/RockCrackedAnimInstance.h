#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "ERockCrackerstate.h"
#include "RockCrackedAnimInstance.generated.h"

class ARockCrackerPod;

UCLASS(Blueprintable, NonTransient)
class URockCrackedAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ARockCrackerPod* Pod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ERockCrackerstate PodState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsBroken;
    
    URockCrackedAnimInstance();
};

