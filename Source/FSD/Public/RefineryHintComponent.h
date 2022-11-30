#pragma once
#include "CoreMinimal.h"
#include "TutorialHintComponent.h"
#include "RefineryHintComponent.generated.h"

class APipelineExtractorPod;
class APipelineSegment;
class AFSDRefinery;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class URefineryHintComponent : public UTutorialHintComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, Transient)
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

