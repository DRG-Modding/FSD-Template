#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "PillarSegment.h"
#include "RandRange.h"
#include "PillarSettings.generated.h"

class UFloodFillSettings;

UCLASS()
class UPillarSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FPillarSegment> PillarSegments;
    
    UPROPERTY(EditAnywhere)
    FRandRange PointRange;
    
    UPROPERTY(EditAnywhere)
    FRandRange PointNoiseRange;
    
    UPROPERTY(EditAnywhere)
    FRandRange PillarRangeScale;
    
    UPROPERTY(EditAnywhere)
    FRandRange PillarNoiseRangeScale;
    
    UPROPERTY(EditAnywhere)
    UFloodFillSettings* Noise;
    
    UPillarSettings();
};

