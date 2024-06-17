#pragma once
#include "CoreMinimal.h"
#include "DetailedTagSet.h"
#include "DetailedTagQuery.generated.h"

class UDetailedTagCategory;

USTRUCT(BlueprintType)
struct FDetailedTagQuery {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UDetailedTagCategory*, FDetailedTagSet> Map;
    
public:
    FSD_API FDetailedTagQuery();
};

