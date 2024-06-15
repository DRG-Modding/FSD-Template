#pragma once
#include "CoreMinimal.h"
#include "StreamlineVersion.h"
#include "UStreamlineFeatureRequirementsFlags.h"
#include "UStreamlineFeatureSupport.h"
#include "StreamlineFeatureRequirements.generated.h"

USTRUCT(BlueprintType)
struct FStreamlineFeatureRequirements {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStreamlineFeatureSupport Support;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStreamlineFeatureRequirementsFlags Requirements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStreamlineVersion RequiredOperatingSystemVersion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStreamlineVersion DetectedOperatingSystemVersion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStreamlineVersion RequiredDriverVersion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStreamlineVersion DetectedDriverVersion;
    
    STREAMLINEBLUEPRINT_API FStreamlineFeatureRequirements();
};

