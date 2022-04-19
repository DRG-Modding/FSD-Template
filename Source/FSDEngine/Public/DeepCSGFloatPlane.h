#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DeepCSGNode.h"
#include "DeepCSGFloatPlane.generated.h"

USTRUCT(BlueprintType)
struct FDeepCSGFloatPlane {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FVector4 Plane;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FDeepCSGNode Top;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FDeepCSGNode Bottom;
    
    FSDENGINE_API FDeepCSGFloatPlane();
};

