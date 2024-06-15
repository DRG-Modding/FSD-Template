#pragma once
#include "CoreMinimal.h"
#include "VanityTagCategories.generated.h"

class UTagVanityCategory;

USTRUCT(BlueprintType)
struct FVanityTagCategories {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTagVanityCategory* General;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTagVanityCategory* Seasons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTagVanityCategory* Headwear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTagVanityCategory* Beards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTagVanityCategory* Moustaches;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTagVanityCategory* Eyebrows;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTagVanityCategory* Sideburns;
    
    FSD_API FVanityTagCategories();
};

