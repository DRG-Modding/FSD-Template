#pragma once
#include "CoreMinimal.h"
#include "DetailedTagSet.generated.h"

class UDetailedTag;

USTRUCT(BlueprintType)
struct FDetailedTagSet {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<UDetailedTag*> Tags;
    
public:
    FSD_API FDetailedTagSet();
};

