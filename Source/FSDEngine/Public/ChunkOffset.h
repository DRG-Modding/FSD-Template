#pragma once
#include "CoreMinimal.h"
#include "ChunkOffset.generated.h"

USTRUCT()
struct FChunkOffset {
    GENERATED_BODY()
public:
    UPROPERTY(meta=(AllowPrivateAccess=true))
    int16 X;
    
    UPROPERTY(meta=(AllowPrivateAccess=true))
    int16 Y;
    
    UPROPERTY(meta=(AllowPrivateAccess=true))
    int16 Z;
    
    FSDENGINE_API FChunkOffset();
};

