#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "EPipelineExtractorPodAnimState.h"
#include "ERessuplyPodState.h"
#include "EPipelineBuildState.h"
#include "ERefineryState.h"
#include "PipelineExtractorPodAnimInstance.generated.h"

class APipelineExtractorPod;
class APipelineStart;
class APipelineSegment;
class AFSDRefinery;

UCLASS(Abstract, Blueprintable, NonTransient)
class FSD_API UPipelineExtractorPodAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ConnectionRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPipelineExtractorPodAnimState AnimState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERessuplyPodState PodState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPipelineBuildState PipelineState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERefineryState RefineryState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationSpeed;
    
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<APipelineExtractorPod> Pod;
    
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<APipelineSegment> ConnectedSegment;
    
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<APipelineStart> PipelineStart;
    
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<AFSDRefinery> Refinery;
    
public:
    UPipelineExtractorPodAnimInstance();
};

