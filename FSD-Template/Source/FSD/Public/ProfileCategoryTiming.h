#pragma once
#include "CoreMinimal.h"
#include "ProfileCategoryTiming.generated.h"

USTRUCT(BlueprintType)
struct FProfileCategoryTiming {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FString CategoryName;
    
    UPROPERTY(BlueprintReadWrite)
    float CategoryTime;
    
    FSD_API FProfileCategoryTiming();
};

