#pragma once
#include "CoreMinimal.h"
#include "CSGCylinderProperties.generated.h"

USTRUCT(BlueprintType)
struct FCSGCylinderProperties {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Height;
    
    UPROPERTY(EditAnywhere)
    float Radius;
    
    UPROPERTY(EditAnywhere)
    int32 Sides;
    
    FSDENGINE_API FCSGCylinderProperties();
};

