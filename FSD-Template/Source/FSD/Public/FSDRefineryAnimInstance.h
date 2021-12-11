#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "ERefineryState.h"
#include "FSDRefineryAnimInstance.generated.h"

UCLASS(NonTransient)
class UFSDRefineryAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    ERefineryState RefineryState;
    
public:
    UFSDRefineryAnimInstance();
};

