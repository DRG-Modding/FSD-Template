#pragma once
#include "CoreMinimal.h"
#include "FSDTagsAttitude.h"
#include "FSDTagsSurfaceProperties.h"
#include "FSDTagsRoot.generated.h"

USTRUCT(BlueprintType)
struct FFSDTagsRoot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFSDTagsAttitude Attitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFSDTagsSurfaceProperties SurfaceProperties;
    
    FSD_API FFSDTagsRoot();
};

