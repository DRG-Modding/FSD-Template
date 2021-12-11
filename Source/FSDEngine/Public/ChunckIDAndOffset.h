#pragma once
#include "CoreMinimal.h"
#include "ChunkId.h"
#include "ChunkOffset.h"
#include "ChunckIDAndOffset.generated.h"

USTRUCT()
struct FChunckIDAndOffset {
    GENERATED_BODY()
public:
    UPROPERTY()
    FChunkId ChunkId;
    
    UPROPERTY()
    FChunkOffset Offset;
    
    FSDENGINE_API FChunckIDAndOffset();
};

