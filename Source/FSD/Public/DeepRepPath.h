#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EDeepMovementState.h"
#include "DeepRepPath.generated.h"

USTRUCT(BlueprintType)
struct FDeepRepPath {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FVector PathBase;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    uint8 PathLength;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    EDeepMovementState State;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    uint8 StateBits;
    
    UPROPERTY(Transient, meta=(AllowPrivateAccess=true))
    FVector PathOffsets[16];
    
    FSD_API FDeepRepPath();
};

