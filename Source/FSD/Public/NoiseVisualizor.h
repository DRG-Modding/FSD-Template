#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "NoiseVisualizor.generated.h"

class UFloodFillSettings;

UCLASS()
class ANoiseVisualizor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UFloodFillSettings* FloodFillSettings;
    
    UPROPERTY(EditInstanceOnly, Transient)
    float FreqMultiplier;
    
    UPROPERTY(EditInstanceOnly, Transient)
    float AmplitudeMultiplier;
    
    UPROPERTY(EditInstanceOnly, Transient)
    FVector NoiseSize;
    
    UPROPERTY(EditInstanceOnly, Transient)
    float PointSize;
    
    UPROPERTY(EditInstanceOnly, Transient)
    float PostNoiseAmplitude;
    
    UPROPERTY(EditInstanceOnly, Transient)
    int32 Octaves;
    
    UPROPERTY(EditInstanceOnly, Transient)
    FVector Origin;
    
    UPROPERTY(EditAnywhere, Transient)
    bool ShowNoise;
    
    UPROPERTY(EditAnywhere, Transient)
    bool ShowTerrainNoise;
    
public:
    ANoiseVisualizor();
};

