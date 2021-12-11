#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "UObject/NoExportTypes.h"
#include "TunnelSegmentSetting.generated.h"

class UTerrainMaterial;
class UFloodFillSettings;

UCLASS(BlueprintType)
class UTunnelSegmentSetting : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UTerrainMaterial* Material;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UFloodFillSettings* PathfinderNoise;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UFloodFillSettings* CielingNoise;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UFloodFillSettings* WallNoise;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UFloodFillSettings* FloorNoise;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D VRange;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D HRange;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D Cielingheight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D FloorHeight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D CielingNoiseRange;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D WallNoiseRange;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D FloorNoiseRange;
    
    UTunnelSegmentSetting();
};

