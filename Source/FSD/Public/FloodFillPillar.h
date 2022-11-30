#pragma once
#include "CoreMinimal.h"
#include "RoomFeature.h"
#include "RandLinePoint.h"
#include "RandRange.h"
#include "FloodFillPillar.generated.h"

class UFloodFillSettings;

UCLASS(Blueprintable, EditInlineNew)
class UFloodFillPillar : public URoomFeature {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFloodFillSettings* NoiseOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRandLinePoint> Points;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRandRange RangeScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRandRange NoiseRangeScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRandRange EndcapScale;
    
public:
    UFloodFillPillar();
};

