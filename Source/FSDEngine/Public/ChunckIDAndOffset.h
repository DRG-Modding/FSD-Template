#pragma once
#include "CoreMinimal.h"
#include "ChunkOffset.h"
#include "ChunkId.h"
#include "ChunckIDAndOffset.generated.h"

USTRUCT(BlueprintType)
struct FChunckIDAndOffset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChunkId ChunkId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChunkOffset Offset;
    
    FSDENGINE_API FChunckIDAndOffset();
};

