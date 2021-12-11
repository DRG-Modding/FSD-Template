#pragma once
#include "CoreMinimal.h"
#include "EncodedChunkId.h"
#include "EncodedChunkCellId.generated.h"

USTRUCT()
struct FEncodedChunkCellId {
    GENERATED_BODY()
public:
    UPROPERTY()
    FEncodedChunkId ChunkId;
    
    UPROPERTY()
    uint16 cellOffset;
    
    FSDENGINE_API FEncodedChunkCellId();
};

