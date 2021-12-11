#pragma once
#include "CoreMinimal.h"
#include "DeepCSGNode.h"
#include "DeepCSGFloatPlane.h"
#include "DeepCSGFloatTree.generated.h"

USTRUCT(BlueprintType)
struct FDeepCSGFloatTree {
    GENERATED_BODY()
public:
    UPROPERTY()
    FDeepCSGNode Root;
    
    UPROPERTY()
    TArray<FDeepCSGFloatPlane> Planes;
    
    FSDENGINE_API FDeepCSGFloatTree();
};

