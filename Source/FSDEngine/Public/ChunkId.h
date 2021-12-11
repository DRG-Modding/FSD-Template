#pragma once
#include "CoreMinimal.h"
#include "ChunkId.generated.h"

USTRUCT(BlueprintType)
struct FSDENGINE_API FChunkId {
    GENERATED_BODY()
public:
    UPROPERTY()
    int16 X;
    
    UPROPERTY()
    int16 Y;
    
    UPROPERTY()
    int16 Z;
    
    FChunkId();
};

FORCEINLINE uint32 GetTypeHash(const FChunkId) { return 0; }