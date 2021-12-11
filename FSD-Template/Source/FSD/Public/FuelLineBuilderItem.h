#pragma once
#include "CoreMinimal.h"
#include "TrackBuilderItem.h"
#include "FuelLineBuilderItem.generated.h"

class UItemPlacerAggregator;

UCLASS(Abstract)
class FSD_API AFuelLineBuilderItem : public ATrackBuilderItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UItemPlacerAggregator* SegmentPlacer;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceivePlacementUpdated(bool InCanPlace, bool InConnecting, float InDistanceProgress);
    
public:
    AFuelLineBuilderItem();
};

