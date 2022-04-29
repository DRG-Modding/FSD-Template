#pragma once
#include "CoreMinimal.h"
#include "MatrixWithExactSync.generated.h"

USTRUCT(BlueprintType)
struct FSDENGINE_API FMatrixWithExactSync {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Values[16];
    
    FMatrixWithExactSync();
};

