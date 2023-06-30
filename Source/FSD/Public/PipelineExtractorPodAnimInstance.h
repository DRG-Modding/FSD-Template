#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "EPipelineBuildState.h"
#include "EPipelineExtractorPodAnimState.h"
#include "ERefineryState.h"
#include "ERessuplyPodState.h"
#include "PipelineExtractorPodAnimInstance.generated.h"

class AFSDRefinery;
class APipelineExtractorPod;
class APipelineSegment;
class APipelineStart;

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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<APipelineExtractorPod> Pod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<APipelineSegment> ConnectedSegment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<APipelineStart> PipelineStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AFSDRefinery> Refinery;
    
public:
    UPipelineExtractorPodAnimInstance();
};

