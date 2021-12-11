#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "UObject/NoExportTypes.h"
#include "TentacleTarget.generated.h"

USTRUCT(BlueprintType)
struct FTentacleTarget {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FVector_NetQuantize Location;
    
    UPROPERTY(Transient)
    FRotator Rotation;
    
    UPROPERTY(Transient)
    float MovementDuration;
    
    UPROPERTY(Transient)
    bool UseSpring;
    
    FSD_API FTentacleTarget();
};

