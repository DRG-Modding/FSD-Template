#pragma once
#include "CoreMinimal.h"
#include "ChunkOffset.h"
#include "ChunkId.h"
#include "ChunckIDAndOffsetBox.generated.h"

USTRUCT()
struct FChunckIDAndOffsetBox {
    GENERATED_BODY()
public:
    UPROPERTY(meta=(AllowPrivateAccess=true))
    FChunkId ChunkId;
    
    UPROPERTY(meta=(AllowPrivateAccess=true))
    FChunkOffset minOffset;
    
    UPROPERTY(meta=(AllowPrivateAccess=true))
    FChunkOffset maxOffset;
    
    FSDENGINE_API FChunckIDAndOffsetBox();
};

