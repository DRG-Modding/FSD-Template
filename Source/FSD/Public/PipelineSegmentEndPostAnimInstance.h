#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "PipelineSegmentEndPostAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class UPipelineSegmentEndPostAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AssemblyAnimLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AssemblyTimeTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AssemblyTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAssembling;
    
public:
    UPipelineSegmentEndPostAnimInstance();
};

