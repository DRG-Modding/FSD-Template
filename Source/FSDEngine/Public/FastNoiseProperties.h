#pragma once
#include "CoreMinimal.h"
#include "EFNRotationType3D.h"
#include "EFNNoiseType.h"
#include "EFNDomainWarpType.h"
#include "EFNCellularDistanceFunc.h"
#include "EFNFractalType.h"
#include "EFNCellularReturnType.h"
#include "FastNoiseProperties.generated.h"

USTRUCT()
struct FSDENGINE_API FFastNoiseProperties {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float Frequency;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EFNNoiseType NoiseType;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EFNRotationType3D RotationType3d;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EFNFractalType FractalType;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Octaves;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float Lacunarity;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float Gain;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float WeightedStrength;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float PingPongStrength;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EFNCellularDistanceFunc CellularDistanceFunc;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EFNCellularReturnType CellularReturnYype;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float CellularJitterMod;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EFNDomainWarpType DomainWarpType;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float WarpAmplitude;
    
    FFastNoiseProperties();
};

