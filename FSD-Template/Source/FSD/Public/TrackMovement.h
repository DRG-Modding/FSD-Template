#pragma once
#include "CoreMinimal.h"
#include "TrackMovement.generated.h"

USTRUCT(BlueprintType)
struct FTrackMovement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Direction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Distance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Speed;
    
    FSD_API FTrackMovement();
};

