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
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFloodFillSettings* FloodFillSettings;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly, Transient, meta=(AllowPrivateAccess=true))
    float FreqMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly, Transient, meta=(AllowPrivateAccess=true))
    float AmplitudeMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly, Transient, meta=(AllowPrivateAccess=true))
    FVector NoiseSize;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly, Transient, meta=(AllowPrivateAccess=true))
    float PointSize;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly, Transient, meta=(AllowPrivateAccess=true))
    float PostNoiseAmplitude;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly, Transient, meta=(AllowPrivateAccess=true))
    int32 Octaves;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly, Transient, meta=(AllowPrivateAccess=true))
    FVector Origin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool ShowNoise;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool ShowTerrainNoise;
    
public:
    ANoiseVisualizor();
};

