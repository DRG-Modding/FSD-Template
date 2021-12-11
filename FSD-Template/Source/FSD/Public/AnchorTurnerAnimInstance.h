#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "AnchorTurnerAnimInstance.generated.h"

UCLASS(NonTransient)
class UAnchorTurnerAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    float ModuleRotation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    float Percent;
    
    UPROPERTY(EditAnywhere, Transient)
    float TurnSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool IsFinished;
    
    UAnchorTurnerAnimInstance();
};

