#pragma once
#include "CoreMinimal.h"
#include "Curves/CurveFloat.h"
#include "DebrisActorComponent.h"
#include "InfluencerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UInfluencerComponent : public UDebrisActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve ProbabilityCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve ScaleCurve;
    
public:
    UInfluencerComponent();
};

