#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "EMiningPodState.h"
#include "EMiningPodRampState.h"
#include "MiningPodAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class UMiningPodAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMiningPodRampState rampState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMiningPodState PodState;
    
public:
    UMiningPodAnimInstance();
};

