#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DeepPathFinderSize.h"
#include "FakeMoverPropulsion.h"
#include "FakeMoverTarget.h"
#include "FakeMoverSettings.generated.h"

UCLASS(BlueprintType)
class UFakeMoverSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    DeepPathFinderSize PathfinderColiSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool StickToSurface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool AlignRotationToSurface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AirFriction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SurfaceFriction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Gravity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AirGravity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FFakeMoverPropulsion Propulsion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FFakeMoverTarget NearestPlayerInfluence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FFakeMoverTarget TargetInfluence;
    
    UFakeMoverSettings();
};

