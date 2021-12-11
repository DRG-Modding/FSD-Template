#pragma once
#include "CoreMinimal.h"
#include "GemResourceCreator.h"
#include "RandomGemResourceCreator.generated.h"

class UCurveFloat;

UCLASS(EditInlineNew)
class URandomGemResourceCreator : public UGemResourceCreator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UCurveFloat* PlacementDistanceProbabilityCurve;
    
public:
    URandomGemResourceCreator();
};

