#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "UObject/NoExportTypes.h"
#include "TentacleTarget.generated.h"

USTRUCT(BlueprintType)
struct FTentacleTarget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize Location;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FRotator Rotation;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    float MovementDuration;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool UseSpring;
    
    FSD_API FTentacleTarget();
};

