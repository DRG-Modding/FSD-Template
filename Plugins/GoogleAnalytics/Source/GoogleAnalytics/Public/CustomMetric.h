#pragma once
#include "CoreMinimal.h"
#include "CustomMetric.generated.h"

USTRUCT(BlueprintType)
struct FCustomMetric {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    UPROPERTY(EditAnywhere)
    float Value;
    
    GOOGLEANALYTICS_API FCustomMetric();
};

