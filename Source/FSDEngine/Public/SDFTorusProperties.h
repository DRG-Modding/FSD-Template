#pragma once
#include "CoreMinimal.h"
#include "SDFTorusProperties.generated.h"

USTRUCT(BlueprintType)
struct FSDFTorusProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TubeRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SizeOverrideName;
    
    FSDENGINE_API FSDFTorusProperties();
};

