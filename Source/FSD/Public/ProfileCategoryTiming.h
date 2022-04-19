#pragma once
#include "CoreMinimal.h"
#include "ProfileCategoryTiming.generated.h"

USTRUCT(BlueprintType)
struct FProfileCategoryTiming {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString CategoryName;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float CategoryTime;
    
    FSD_API FProfileCategoryTiming();
};

