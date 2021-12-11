#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "PipelineSegmentEndPostAnimInstance.generated.h"

UCLASS(NonTransient)
class UPipelineSegmentEndPostAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AssemblyAnimLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AssemblyTimeTarget;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float AssemblyTime;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bAssembling;
    
public:
    UPipelineSegmentEndPostAnimInstance();
};

