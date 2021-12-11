#pragma once
#include "CoreMinimal.h"
#include "ChunkOffset.generated.h"

USTRUCT()
struct FChunkOffset {
    GENERATED_BODY()
public:
    UPROPERTY()
    int16 X;
    
    UPROPERTY()
    int16 Y;
    
    UPROPERTY()
    int16 Z;
    
    FSDENGINE_API FChunkOffset();
};

