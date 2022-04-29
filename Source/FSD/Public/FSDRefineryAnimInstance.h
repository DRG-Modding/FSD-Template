#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "ERefineryState.h"
#include "FSDRefineryAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class UFSDRefineryAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ERefineryState RefineryState;
    
public:
    UFSDRefineryAnimInstance();
};

