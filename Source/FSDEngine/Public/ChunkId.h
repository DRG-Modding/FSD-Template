#pragma once
#include "CoreMinimal.h"
#include "ChunkId.generated.h"

USTRUCT(BlueprintType)
struct FSDENGINE_API FChunkId {
    GENERATED_BODY()
public:
    UPROPERTY(meta=(AllowPrivateAccess=true))
    int16 X;
    
    UPROPERTY(meta=(AllowPrivateAccess=true))
    int16 Y;
    
    UPROPERTY(meta=(AllowPrivateAccess=true))
    int16 Z;
    
    FChunkId();
};

FORCEINLINE uint32 GetTypeHash(const FChunkId) { return 0; }