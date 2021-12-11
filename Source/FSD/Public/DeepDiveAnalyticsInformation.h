#pragma once
#include "CoreMinimal.h"
#include "DeepDiveAnalyticsInformation.generated.h"

USTRUCT(BlueprintType)
struct FDeepDiveAnalyticsInformation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    bool WasDeepDive;
    
    UPROPERTY(BlueprintReadOnly)
    int32 LastDeepDiveStage;
    
    UPROPERTY(BlueprintReadOnly)
    bool EliteDeepDive;
    
    UPROPERTY(BlueprintReadOnly)
    bool IsReplay;
    
    FSD_API FDeepDiveAnalyticsInformation();
};

