#pragma once
#include "CoreMinimal.h"
#include "CSGTriangleMapper.h"
#include "Curves/CurveFloat.h"
#include "DebrisBase.generated.h"

class UObject;
class UCurveFloat;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class FSD_API UDebrisBase : public UCSGTriangleMapper {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* CaveInfluencer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve InfluencerDensityCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve InfluencerSizeCurve;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* CaveInfluenceCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* CaveInflunceSizeCurve;
    
public:
    UDebrisBase();
};

