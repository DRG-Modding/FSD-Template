#pragma once
#include "CoreMinimal.h"
#include "ChunkOffset.generated.h"

USTRUCT(BlueprintType)
struct FChunkOffset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int16 X;
    
    UPROPERTY(EditAnywhere)
    int16 Y;
    
    UPROPERTY(EditAnywhere)
    int16 Z;
    
    FSDENGINE_API FChunkOffset();
};

