#pragma once
#include "CoreMinimal.h"
#include "FakeMoverTarget.generated.h"

USTRUCT(BlueprintType)
struct FFakeMoverTarget {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float InfluenceDistance;
    
    UPROPERTY(EditAnywhere)
    float TargetDistance;
    
    UPROPERTY(EditAnywhere)
    float GetCloserAirAcceleration;
    
    UPROPERTY(EditAnywhere)
    float GetAwayAirAcceleration;
    
    UPROPERTY(EditAnywhere)
    float GetCloserGroundAcceleration;
    
    UPROPERTY(EditAnywhere)
    float GetAwayGroundAcceleration;
    
    UPROPERTY(EditAnywhere)
    float MinDistance;
    
    FSD_API FFakeMoverTarget();
};

