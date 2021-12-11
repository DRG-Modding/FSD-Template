#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "EPipelineBuildState.h"
#include "EPipelineExtractorPodAnimState.h"
#include "ERessuplyPodState.h"
#include "ERefineryState.h"
#include "PipelineExtractorPodAnimInstance.generated.h"

class APipelineStart;
class APipelineExtractorPod;
class APipelineSegment;
class AFSDRefinery;

UCLASS(Abstract, NonTransient)
class FSD_API UPipelineExtractorPodAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float ConnectionRotation;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    EPipelineExtractorPodAnimState AnimState;
    
    UPROPERTY(EditAnywhere)
    ERessuplyPodState PodState;
    
    UPROPERTY(EditAnywhere)
    EPipelineBuildState PipelineState;
    
    UPROPERTY(EditAnywhere)
    ERefineryState RefineryState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RotationSpeed;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<APipelineExtractorPod> Pod;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<APipelineSegment> ConnectedSegment;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<APipelineStart> PipelineStart;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<AFSDRefinery> Refinery;
    
public:
    UPipelineExtractorPodAnimInstance();
};

