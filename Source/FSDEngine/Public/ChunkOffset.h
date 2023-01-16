#pragma once
#include "CoreMinimal.h"
#include "ChunkOffset.generated.h"

USTRUCT(BlueprintType)
struct FChunkOffset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 X;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 Y;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 Z;
    
    FSDENGINE_API FChunkOffset();
};

