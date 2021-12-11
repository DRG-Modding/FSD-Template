#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EDeepMovementState.h"
#include "DeepRepPath.generated.h"

USTRUCT(BlueprintType)
struct FDeepRepPath {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FVector PathBase;
    
    UPROPERTY(Transient)
    uint8 PathLength;
    
    UPROPERTY(Transient)
    EDeepMovementState State;
    
    UPROPERTY(Transient)
    uint8 StateBits;
    
    UPROPERTY(Transient)
    FVector PathOffsets[16];
    
    FSD_API FDeepRepPath();
};

