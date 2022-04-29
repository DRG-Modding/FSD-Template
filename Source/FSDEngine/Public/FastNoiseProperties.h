#pragma once
#include "CoreMinimal.h"
#include "EFNCellularDistanceFunc.h"
#include "EFNRotationType3D.h"
#include "EFNNoiseType.h"
#include "EFNDomainWarpType.h"
#include "EFNCellularReturnType.h"
#include "EFNFractalType.h"
#include "FastNoiseProperties.generated.h"

USTRUCT(BlueprintType)
struct FSDENGINE_API FFastNoiseProperties {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Frequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFNNoiseType NoiseType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFNRotationType3D RotationType3d;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFNFractalType FractalType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Octaves;
    
    UPROPERTY(EditAnywhere)
    float Lacunarity;
    
    UPROPERTY(EditAnywhere)
    float Gain;
    
    UPROPERTY(EditAnywhere)
    float WeightedStrength;
    
    UPROPERTY(EditAnywhere)
    float PingPongStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFNCellularDistanceFunc CellularDistanceFunc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFNCellularReturnType CellularReturnYype;
    
    UPROPERTY(EditAnywhere)
    float CellularJitterMod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFNDomainWarpType DomainWarpType;
    
    UPROPERTY(EditAnywhere)
    float WarpAmplitude;
    
    FFastNoiseProperties();
};

