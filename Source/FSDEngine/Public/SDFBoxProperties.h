#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SDFBoxProperties.generated.h"

USTRUCT(BlueprintType)
struct FSDFBoxProperties {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector HalfSize;
    
    FSDENGINE_API FSDFBoxProperties();
};

