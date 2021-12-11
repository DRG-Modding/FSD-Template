#pragma once
#include "CoreMinimal.h"
#include "CellNoise.h"
#include "Engine/DataAsset.h"
#include "DebrisCellNoiseParameters.h"
#include "UObject/NoExportTypes.h"
#include "CSGTriangleMapper.generated.h"

class UTerrainType;
class UTerrainMaterial;

UCLASS(Abstract, BlueprintType, EditInlineNew)
class UCSGTriangleMapper : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool Enabled;
    
    UPROPERTY(EditAnywhere)
    UTerrainMaterial* AttachToMaterial;
    
    UPROPERTY(EditAnywhere)
    TArray<UTerrainType*> AttachToTypes;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 CellCategories;
    
    UPROPERTY(EditAnywhere)
    float DensityInM2;
    
    UPROPERTY(EditAnywhere)
    float MinVerticalAngle;
    
    UPROPERTY(EditAnywhere)
    float MaxVerticalAngle;
    
    UPROPERTY(EditAnywhere)
    FVector ScaleMin;
    
    UPROPERTY(EditAnywhere)
    FVector ScaleMax;
    
    UPROPERTY(EditAnywhere)
    float ScaleBias;
    
    UPROPERTY(EditAnywhere)
    bool IndependentScaleAxes;
    
    UPROPERTY(EditAnywhere)
    FVector BaseNormal;
    
    UPROPERTY(EditAnywhere)
    float SurfaceNormalFactor;
    
    UPROPERTY(EditAnywhere)
    FVector SurfaceNormalLimiter;
    
    UPROPERTY(EditAnywhere)
    float RandomNormalFactor;
    
    UPROPERTY(EditAnywhere)
    float RotationMinAngle;
    
    UPROPERTY(EditAnywhere)
    float RotationMaxAngle;
    
    UPROPERTY(EditAnywhere)
    float PosOffset;
    
    UPROPERTY(EditAnywhere)
    float PosOffsetSurface;
    
    UPROPERTY(EditAnywhere)
    TArray<FCellNoise> NoiseLayers;
    
    UPROPERTY(VisibleAnywhere)
    FDebrisCellNoiseParameters CellNoiseParameters;
    
    UCSGTriangleMapper();
};

