#pragma once
#include "CoreMinimal.h"
#include "DeepPathFinderPreference.h"
#include "DeepPathFinderType.h"
#include "DeepPathFinderSize.h"
#include "CablePathSettings.generated.h"

USTRUCT(BlueprintType)
struct FCablePathSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    DeepPathFinderType PathType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    DeepPathFinderSize PathSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    DeepPathFinderPreference PathPreference;
    
    UPROPERTY(EditAnywhere)
    float MinStepSize;
    
    UPROPERTY(EditAnywhere)
    float MaxStepSize;
    
    UPROPERTY(EditAnywhere)
    float MaxNoiseY;
    
    FSD_API FCablePathSettings();
};

