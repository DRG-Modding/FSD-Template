#pragma once
#include "CoreMinimal.h"
#include "EncodedChunkId.h"
#include "EncodedChunkCellId.generated.h"

USTRUCT(BlueprintType)
struct FEncodedChunkCellId {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEncodedChunkId ChunkId;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 cellOffset;
    
    FSDENGINE_API FEncodedChunkCellId();
};

