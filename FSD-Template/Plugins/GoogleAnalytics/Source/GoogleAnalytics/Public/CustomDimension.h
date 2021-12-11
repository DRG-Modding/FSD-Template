#pragma once
#include "CoreMinimal.h"
#include "CustomDimension.generated.h"

USTRUCT(BlueprintType)
struct FCustomDimension {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Value;
    
    GOOGLEANALYTICS_API FCustomDimension();
};

