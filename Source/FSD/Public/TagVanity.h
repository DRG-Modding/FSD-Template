#pragma once
#include "CoreMinimal.h"
#include "DetailedTag.h"
#include "TagVanity.generated.h"

class UTagVanityCategory;

UCLASS(Abstract, Blueprintable)
class UTagVanity : public UDetailedTag {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTagVanityCategory* Category;
    
public:
    UTagVanity();

};

