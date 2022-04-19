#pragma once
#include "CoreMinimal.h"
#include "CustomDimension.generated.h"

USTRUCT(BlueprintType)
struct FCustomDimension {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Value;
    
    GOOGLEANALYTICS_API FCustomDimension();
};

