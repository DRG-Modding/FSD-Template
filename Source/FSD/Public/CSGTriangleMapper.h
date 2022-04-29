#pragma once
#include "CoreMinimal.h"
#include "CellNoise.h"
#include "Engine/DataAsset.h"
#include "UObject/NoExportTypes.h"
#include "DebrisCellNoiseParameters.h"
#include "CSGTriangleMapper.generated.h"

class UTerrainMaterial;
class UTerrainType;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UCSGTriangleMapper : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Enabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTerrainMaterial* AttachToMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTerrainType*> AttachToTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CellCategories;
    
    UPROPERTY(EditAnywhere)
    float DensityInM2;
    
    UPROPERTY(EditAnywhere)
    float MinVerticalAngle;
    
    UPROPERTY(EditAnywhere)
    float MaxVerticalAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ScaleMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ScaleMax;
    
    UPROPERTY(EditAnywhere)
    float ScaleBias;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IndependentScaleAxes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector BaseNormal;
    
    UPROPERTY(EditAnywhere)
    float SurfaceNormalFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCellNoise> NoiseLayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDebrisCellNoiseParameters CellNoiseParameters;
    
    UCSGTriangleMapper();
};

