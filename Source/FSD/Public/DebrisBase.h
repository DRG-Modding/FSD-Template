#pragma once
#include "CoreMinimal.h"
#include "CSGTriangleMapper.h"
#include "Curves/CurveFloat.h"
#include "DebrisBase.generated.h"

class UObject;
class UCurveFloat;

UCLASS(Abstract, EditInlineNew)
class FSD_API UDebrisBase : public UCSGTriangleMapper {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UObject* CaveInfluencer;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve InfluencerDensityCurve;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve InfluencerSizeCurve;
    
private:
    UPROPERTY()
    UCurveFloat* CaveInfluenceCurve;
    
    UPROPERTY()
    UCurveFloat* CaveInflunceSizeCurve;
    
public:
    UDebrisBase();
};

