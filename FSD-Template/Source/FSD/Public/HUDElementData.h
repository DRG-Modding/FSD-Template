#pragma once
#include "CoreMinimal.h"
#include "EHUDVisibilityMode.h"
#include "HUDElementData.generated.h"

USTRUCT(BlueprintType)
struct FHUDElementData {
    GENERATED_BODY()
public:
    UPROPERTY()
    EHUDVisibilityMode Mode;
    
    UPROPERTY()
    int32 Version;
    
    FSD_API FHUDElementData();
};

