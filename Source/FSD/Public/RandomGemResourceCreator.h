#pragma once
#include "CoreMinimal.h"
#include "GemResourceCreator.h"
#include "RandomGemResourceCreator.generated.h"

class UCurveFloat;

UCLASS(Blueprintable, EditInlineNew)
class URandomGemResourceCreator : public UGemResourceCreator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* PlacementDistanceProbabilityCurve;
    
public:
    URandomGemResourceCreator();
};

