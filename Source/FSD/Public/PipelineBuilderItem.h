#pragma once
#include "CoreMinimal.h"
#include "TrackBuilderItem.h"
#include "PipelineBuilderItem.generated.h"

class UItemPlacerAggregator;

UCLASS(Abstract)
class FSD_API APipelineBuilderItem : public ATrackBuilderItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UItemPlacerAggregator* SegmentPlacer;
    
public:
    APipelineBuilderItem();
};

