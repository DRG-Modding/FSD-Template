#pragma once
#include "CoreMinimal.h"
#include "EncodedChunkId.h"
#include "EncodedChunkCellId.generated.h"

USTRUCT()
struct FEncodedChunkCellId {
    GENERATED_BODY()
public:
    UPROPERTY(meta=(AllowPrivateAccess=true))
    FEncodedChunkId ChunkId;
    
    UPROPERTY(meta=(AllowPrivateAccess=true))
    uint16 cellOffset;
    
    FSDENGINE_API FEncodedChunkCellId();
};

