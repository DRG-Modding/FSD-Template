#pragma once
#include "CoreMinimal.h"
#include "TrackBuilderItem.h"
#include "PipelineBuilderItem.generated.h"

class UItemPlacerAggregator;

UCLASS(Abstract, Blueprintable)
class FSD_API APipelineBuilderItem : public ATrackBuilderItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UItemPlacerAggregator* SegmentPlacer;
    
public:
    APipelineBuilderItem();
};

