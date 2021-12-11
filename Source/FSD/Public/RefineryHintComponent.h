#pragma once
#include "CoreMinimal.h"
#include "TutorialHintComponent.h"
#include "RefineryHintComponent.generated.h"

class AFSDRefinery;
class APipelineSegment;
class APipelineExtractorPod;

UCLASS(Abstract)
class URefineryHintComponent : public UTutorialHintComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    TWeakObjectPtr<AFSDRefinery> Refinery;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveRefinerySpawned(AFSDRefinery* InRefinery);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceivePipelineSegmentPlaced(APipelineSegment* InSegment);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveExtractorPodSpawned(APipelineExtractorPod* InExtractorPod);
    
    UFUNCTION(BlueprintCallable)
    void OnRefinerySpawned(AFSDRefinery* InRefinery);
    
public:
    URefineryHintComponent();
};

