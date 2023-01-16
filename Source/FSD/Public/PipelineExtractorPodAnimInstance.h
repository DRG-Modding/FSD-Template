#pragma once
#include "CoreMinimal.h"
#include "ERessuplyPodState.h"
#include "EPipelineBuildState.h"
#include "ERefineryState.h"
#include "EPipelineExtractorPodAnimState.h"
#include "Animation/AnimInstance.h"
#include "PipelineExtractorPodAnimInstance.generated.h"

class AFSDRefinery;
class APipelineStart;
class APipelineSegment;
class APipelineExtractorPod;

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
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<APipelineExtractorPod> Pod;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<APipelineSegment> ConnectedSegment;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<APipelineStart> PipelineStart;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AFSDRefinery> Refinery;
    
public:
    UPipelineExtractorPodAnimInstance();
};

