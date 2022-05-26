#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "AnchorTurnerAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class UAnchorTurnerAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ModuleRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float Percent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TurnSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsFinished;
    
    UAnchorTurnerAnimInstance();
};

