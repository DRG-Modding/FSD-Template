#pragma once
#include "CoreMinimal.h"
#include "DetailedTagCategory.h"
#include "TagVanityCategory.generated.h"

UCLASS(Blueprintable)
class UTagVanityCategory : public UDetailedTagCategory {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SortingPriority;
    
public:
    UTagVanityCategory();

};

