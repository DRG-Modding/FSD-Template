#pragma once
#include "CoreMinimal.h"
#include "CSGBakedChildInstanceProperties.generated.h"

class UCSGBake;

USTRUCT(BlueprintType)
struct FCSGBakedChildInstanceProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCSGBake* BakedCSG;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 VariantIndex;
    
    FSDENGINE_API FCSGBakedChildInstanceProperties();
};

