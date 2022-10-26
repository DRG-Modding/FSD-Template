#pragma once
#include "CoreMinimal.h"
#include "Rendering/RenderingCommon.h"
#include "ColorVisionDeficiencySettings.generated.h"

USTRUCT(BlueprintType)
struct FColorVisionDeficiencySettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EColorVisionDeficiency Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Severity;
    
    FSD_API FColorVisionDeficiencySettings();
};

