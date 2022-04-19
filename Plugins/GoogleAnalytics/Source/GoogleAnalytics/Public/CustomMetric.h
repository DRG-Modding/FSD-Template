#pragma once
#include "CoreMinimal.h"
#include "CustomMetric.generated.h"

USTRUCT(BlueprintType)
struct FCustomMetric {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    GOOGLEANALYTICS_API FCustomMetric();
};

