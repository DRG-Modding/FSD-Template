#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SDFBoxProperties.generated.h"

USTRUCT(BlueprintType)
struct FSDFBoxProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector HalfSize;
    
    FSDENGINE_API FSDFBoxProperties();
};

