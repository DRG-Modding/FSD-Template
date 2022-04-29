#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "GraplingGunState.generated.h"

USTRUCT(BlueprintType)
struct FGraplingGunState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize TargetLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 IsGrapling: 1;
    
    FSD_API FGraplingGunState();
};

