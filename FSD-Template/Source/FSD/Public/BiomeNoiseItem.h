#pragma once
#include "CoreMinimal.h"
#include "BiomeNoiseItem.generated.h"

class UFloodFillSettings;
class UDetailNoise;

USTRUCT(BlueprintType)
struct FBiomeNoiseItem {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UFloodFillSettings* CeilingNoise;
    
    UPROPERTY(EditAnywhere)
    UDetailNoise* CeilingDetailNoise;
    
    UPROPERTY(EditAnywhere)
    UFloodFillSettings* WallNoise;
    
    UPROPERTY(EditAnywhere)
    UDetailNoise* WallDetailNoise;
    
    UPROPERTY(EditAnywhere)
    UFloodFillSettings* FloorNoise;
    
    UPROPERTY(EditAnywhere)
    UDetailNoise* FloorDetailNoise;
    
    UPROPERTY(EditAnywhere)
    float Weight;
    
    FSD_API FBiomeNoiseItem();
};

