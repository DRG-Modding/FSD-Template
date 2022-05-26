#pragma once
#include "CoreMinimal.h"
#include "TrackBuilderItem.h"
#include "FuelLineBuilderItem.generated.h"

class UItemPlacerAggregator;

UCLASS(Abstract, Blueprintable)
class FSD_API AFuelLineBuilderItem : public ATrackBuilderItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UItemPlacerAggregator* SegmentPlacer;
    
public:
    AFuelLineBuilderItem();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceivePlacementUpdated(bool InCanPlace, bool InConnecting, float InDistanceProgress);
    
};

