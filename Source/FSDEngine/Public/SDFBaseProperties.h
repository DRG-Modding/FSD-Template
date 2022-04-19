#pragma once
#include "CoreMinimal.h"
#include "SDFBaseProperties.generated.h"

USTRUCT(BlueprintType)
struct FSDFBaseProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Enabled;
    
    FSDENGINE_API FSDFBaseProperties();
};

