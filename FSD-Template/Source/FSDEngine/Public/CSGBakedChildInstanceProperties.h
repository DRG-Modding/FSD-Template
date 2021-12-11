#pragma once
#include "CoreMinimal.h"
#include "CSGBakedChildInstanceProperties.generated.h"

class UCSGBake;

USTRUCT(BlueprintType)
struct FCSGBakedChildInstanceProperties {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UCSGBake* BakedCSG;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 VariantIndex;
    
    FSDENGINE_API FCSGBakedChildInstanceProperties();
};

