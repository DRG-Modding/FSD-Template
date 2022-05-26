#pragma once
#include "CoreMinimal.h"
#include "CSGCylinderProperties.generated.h"

USTRUCT(BlueprintType)
struct FCSGCylinderProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Height;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Sides;
    
    FSDENGINE_API FCSGCylinderProperties();
};

