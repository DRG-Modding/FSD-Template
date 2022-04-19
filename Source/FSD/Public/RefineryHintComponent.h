#pragma once
#include "CoreMinimal.h"
#include "TutorialHintComponent.h"
#include "RefineryHintComponent.generated.h"

class APipelineExtractorPod;
class AFSDRefinery;
class APipelineSegment;

UCLASS(Abstract, meta=(BlueprintSpawnableComponent))
class URefineryHintComponent : public UTutorialHintComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AFSDRefinery> Refinery;
    
public:
    URefineryHintComponent();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveRefinerySpawned(AFSDRefinery* InRefinery);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceivePipelineSegmentPlaced(APipelineSegment* InSegment);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveExtractorPodSpawned(APipelineExtractorPod* InExtractorPod);
    
    UFUNCTION(BlueprintCallable)
    void OnRefinerySpawned(AFSDRefinery* InRefinery);
    
};

