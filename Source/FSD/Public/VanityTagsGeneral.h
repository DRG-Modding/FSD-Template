#pragma once
#include "CoreMinimal.h"
#include "VanityTagsGeneral.generated.h"

class UTagVanity;

USTRUCT(BlueprintType)
struct FVanityTagsGeneral {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTagVanity* DLC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTagVanity* Festive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTagVanity* Serious;
    
    FSD_API FVanityTagsGeneral();
};

