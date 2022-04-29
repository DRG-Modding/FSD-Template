#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "NoiseVisualizor.generated.h"

class UFloodFillSettings;

UCLASS(Blueprintable)
class ANoiseVisualizor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFloodFillSettings* FloodFillSettings;
    
    UPROPERTY(EditAnywhere, Transient)
    float FreqMultiplier;
    
    UPROPERTY(EditAnywhere, Transient)
    float AmplitudeMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector NoiseSize;
    
    UPROPERTY(EditAnywhere, Transient)
    float PointSize;
    
    UPROPERTY(EditAnywhere, Transient)
    float PostNoiseAmplitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 Octaves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector Origin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool ShowNoise;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool ShowTerrainNoise;
    
public:
    ANoiseVisualizor();
};

