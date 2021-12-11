#pragma once
#include "CoreMinimal.h"
#include "DeepCSGNode.h"
#include "DeepCSGFloatTreePacked.generated.h"

USTRUCT(BlueprintType)
struct FDeepCSGFloatTreePacked {
    GENERATED_BODY()
public:
    UPROPERTY()
    FDeepCSGNode Root;
    
    UPROPERTY()
    TArray<int32> encplanes;
    
    FSDENGINE_API FDeepCSGFloatTreePacked();
};

