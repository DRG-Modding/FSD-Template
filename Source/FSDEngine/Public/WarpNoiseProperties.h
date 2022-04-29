#pragma once
#include "CoreMinimal.h"
#include "EFNRotationType3D.h"
#include "EFNDomainWarpType.h"
#include "EFNFractalType.h"
#include "WarpNoiseProperties.generated.h"

USTRUCT(BlueprintType)
struct FSDENGINE_API FWarpNoiseProperties {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Frequency;
    
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFNDomainWarpType DomainWarpType;
    
    UPROPERTY(EditAnywhere)
    float Amplitude;
    
    FWarpNoiseProperties();
};

