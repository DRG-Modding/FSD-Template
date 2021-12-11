#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DeepCSGNode.h"
#include "DeepCSGFloatPlane.generated.h"

USTRUCT(BlueprintType)
struct FDeepCSGFloatPlane {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector4 Plane;
    
    UPROPERTY()
    FDeepCSGNode Top;
    
    UPROPERTY()
    FDeepCSGNode Bottom;
    
    FSDENGINE_API FDeepCSGFloatPlane();
};

