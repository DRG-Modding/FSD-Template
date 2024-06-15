#pragma once
#include "CoreMinimal.h"
#include "VanityTagsGeneral.h"
#include "VanityTagSettings.generated.h"

USTRUCT(BlueprintType)
struct FVanityTagSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVanityTagsGeneral GeneralTags;
    
    FSD_API FVanityTagSettings();
};

