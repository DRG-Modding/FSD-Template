#pragma once
#include "CoreMinimal.h"
#include "ProfileCategoryTiming.generated.h"

USTRUCT(BlueprintType)
struct FProfileCategoryTiming {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CategoryName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CategoryTime;
    
    FSD_API FProfileCategoryTiming();
};

