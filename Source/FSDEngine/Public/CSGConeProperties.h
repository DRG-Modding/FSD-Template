#pragma once
#include "CoreMinimal.h"
#include "CSGConeProperties.generated.h"

USTRUCT(BlueprintType)
struct FCSGConeProperties {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Height;
    
    UPROPERTY(EditAnywhere)
    float RadiusTop;
    
    UPROPERTY(EditAnywhere)
    float RadiusBottom;
    
    UPROPERTY(EditAnywhere)
    int32 Sides;
    
    FSDENGINE_API FCSGConeProperties();
};

