#pragma once
#include "CoreMinimal.h"
#include "DeepDiveAnalyticsInformation.generated.h"

USTRUCT(BlueprintType)
struct FDeepDiveAnalyticsInformation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool WasDeepDive;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 LastDeepDiveStage;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool EliteDeepDive;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool IsReplay;
    
    FSD_API FDeepDiveAnalyticsInformation();
};

