#pragma once
#include "CoreMinimal.h"
#include "ChunkId.h"
#include "ChunkOffset.h"
#include "ChunckIDAndOffsetBox.generated.h"

USTRUCT(BlueprintType)
struct FChunckIDAndOffsetBox {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChunkId ChunkId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChunkOffset minOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChunkOffset maxOffset;
    
    FSDENGINE_API FChunckIDAndOffsetBox();
};

