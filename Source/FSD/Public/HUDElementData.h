#pragma once
#include "CoreMinimal.h"
#include "EHUDVisibilityMode.h"
#include "HUDElementData.generated.h"

USTRUCT(BlueprintType)
struct FHUDElementData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    EHUDVisibilityMode Mode;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 Version;
    
    FSD_API FHUDElementData();
};

