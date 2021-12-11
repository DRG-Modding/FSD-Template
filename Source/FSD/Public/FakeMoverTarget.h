#pragma once
#include "CoreMinimal.h"
#include "FakeMoverTarget.generated.h"

USTRUCT(BlueprintType)
struct FFakeMoverTarget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float InfluenceDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TargetDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float GetCloserAirAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float GetAwayAirAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float GetCloserGroundAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float GetAwayGroundAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinDistance;
    
    FSD_API FFakeMoverTarget();
};

