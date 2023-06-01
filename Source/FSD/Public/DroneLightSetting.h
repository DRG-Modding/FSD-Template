#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DroneLightSetting.generated.h"

USTRUCT(BlueprintType)
struct FDroneLightSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Intensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    FSD_API FDroneLightSetting();
};

