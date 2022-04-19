#pragma once
#include "CoreMinimal.h"
#include "EPipelineBuildState.h"
#include "Animation/AnimInstance.h"
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
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    float ConnectionRotation;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    EPipelineExtractorPodAnimState AnimState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERessuplyPodState PodState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPipelineBuildState PipelineState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERefineryState RefineryState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationSpeed;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<APipelineExtractorPod> Pod;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<APipelineSegment> ConnectedSegment;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<APipelineStart> PipelineStart;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AFSDRefinery> Refinery;
    
public:
    UPipelineExtractorPodAnimInstance();
};

