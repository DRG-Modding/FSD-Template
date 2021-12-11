#pragma once
#include "CoreMinimal.h"
#include "MatrixWithExactSync.generated.h"

USTRUCT(BlueprintType)
struct FMatrixWithExactSync {
    GENERATED_BODY()
public:
    UPROPERTY()
    float Values[16];
    
    FSDENGINE_API FMatrixWithExactSync();
};

