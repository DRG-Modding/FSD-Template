#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DeepPathFinderSize.h"
#include "FakeMoverTarget.h"
#include "FakeMoverPropulsion.h"
#include "FakeMoverSettings.generated.h"

UCLASS(Blueprintable)
class UFakeMoverSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    DeepPathFinderSize PathfinderColiSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool StickToSurface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AlignRotationToSurface;
    
    UPROPERTY(EditAnywhere)
    float AirFriction;
    
    UPROPERTY(EditAnywhere)
    float SurfaceFriction;
    
    UPROPERTY(EditAnywhere)
    float Gravity;
    
    UPROPERTY(EditAnywhere)
    float AirGravity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFakeMoverPropulsion Propulsion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFakeMoverTarget NearestPlayerInfluence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFakeMoverTarget TargetInfluence;
    
    UFakeMoverSettings();
};

