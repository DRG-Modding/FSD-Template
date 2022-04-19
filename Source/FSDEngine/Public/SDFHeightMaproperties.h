#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SDFHeightMaproperties.generated.h"

USTRUCT(BlueprintType)
struct FSDFHeightMaproperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Scale;
    
    FSDENGINE_API FSDFHeightMaproperties();
};

