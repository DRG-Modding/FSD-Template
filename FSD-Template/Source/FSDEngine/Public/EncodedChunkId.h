#pragma once
#include "CoreMinimal.h"
#include "EncodedChunkId.generated.h"

USTRUCT(BlueprintType)
struct FEncodedChunkId {
    GENERATED_BODY()
public:
    UPROPERTY()
    uint32 ID;
    
    FSDENGINE_API FEncodedChunkId();
};

