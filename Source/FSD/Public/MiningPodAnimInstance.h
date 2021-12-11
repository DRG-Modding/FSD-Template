#pragma once
#include "CoreMinimal.h"
#include "EMiningPodState.h"
#include "Animation/AnimInstance.h"
#include "EMiningPodRampState.h"
#include "MiningPodAnimInstance.generated.h"

UCLASS(NonTransient)
class UMiningPodAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EMiningPodRampState rampState;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EMiningPodState PodState;
    
public:
    UMiningPodAnimInstance();
};

