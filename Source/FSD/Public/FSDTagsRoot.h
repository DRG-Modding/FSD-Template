#pragma once
#include "CoreMinimal.h"
#include "FSDTagsAttitude.h"
#include "FSDTagsRoot.generated.h"

USTRUCT(BlueprintType)
struct FFSDTagsRoot {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FFSDTagsAttitude Attitude;
    
    FSD_API FFSDTagsRoot();
};

