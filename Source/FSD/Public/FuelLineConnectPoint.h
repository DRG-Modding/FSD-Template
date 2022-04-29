#pragma once
#include "CoreMinimal.h"
#include "TrackBuilderConnectPoint.h"
#include "FuelLineConnectPoint.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FSD_API UFuelLineConnectPoint : public UTrackBuilderConnectPoint {
    GENERATED_BODY()
public:
    UFuelLineConnectPoint();
};

