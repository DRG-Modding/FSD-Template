#pragma once
#include "CoreMinimal.h"
#include "ChunkId.h"
#include "ChunkOffset.h"
#include "ChunckIDAndOffsetBox.generated.h"

USTRUCT()
struct FChunckIDAndOffsetBox {
    GENERATED_BODY()
public:
    UPROPERTY()
    FChunkId ChunkId;
    
    UPROPERTY()
    FChunkOffset minOffset;
    
    UPROPERTY()
    FChunkOffset maxOffset;
    
    FSDENGINE_API FChunckIDAndOffsetBox();
};

