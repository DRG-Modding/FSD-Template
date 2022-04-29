#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "PipelineSegmentEndPostAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class UPipelineSegmentEndPostAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float AssemblyAnimLength;
    
    UPROPERTY(EditAnywhere)
    float AssemblyTimeTarget;
    
    UPROPERTY(EditAnywhere)
    float AssemblyTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAssembling;
    
public:
    UPipelineSegmentEndPostAnimInstance();
};

