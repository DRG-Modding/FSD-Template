#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "UObject/NoExportTypes.h"
#include "LayeredNoise.h"
#include "FloodFillSettings.generated.h"

UCLASS()
class UFloodFillSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector NoiseSize;
    
    UPROPERTY(EditAnywhere)
    float FreqMultiplier;
    
    UPROPERTY(EditAnywhere)
    float AmplitudeMultiplier;
    
    UPROPERTY(EditAnywhere)
    float MinValue;
    
    UPROPERTY(EditAnywhere)
    float MaxValue;
    
    UPROPERTY(EditAnywhere)
    bool Turbulence;
    
    UPROPERTY(EditAnywhere)
    bool Invert;
    
    UPROPERTY(EditAnywhere)
    int32 Octaves;
    
    UPROPERTY(EditAnywhere)
    TArray<FLayeredNoise> NoiseLayers;
    
    UFloodFillSettings();
};

