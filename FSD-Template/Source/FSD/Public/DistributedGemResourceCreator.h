#pragma once
#include "CoreMinimal.h"
#include "GemResourceCreator.h"
#include "DistributedGemResourceCreator.generated.h"

class UCurveFloat;

UCLASS(EditInlineNew)
class UDistributedGemResourceCreator : public UGemResourceCreator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UCurveFloat* PlacementDistanceProbabilityCurve;
    
public:
    UDistributedGemResourceCreator();
};

