#pragma once
#include "CoreMinimal.h"
#include "TrackMovement.generated.h"

USTRUCT(BlueprintType)
struct FTrackMovement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Direction;
    
    UPROPERTY(EditAnywhere)
    float Distance;
    
    UPROPERTY(EditAnywhere)
    float Speed;
    
    FSD_API FTrackMovement();
};

