#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "GraplingGunState.generated.h"

USTRUCT(BlueprintType)
struct FGraplingGunState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FVector_NetQuantize TargetLocation;
    
    UPROPERTY(BlueprintReadOnly)
    uint8 IsGrapling: 1;
    
    FSD_API FGraplingGunState();
};

