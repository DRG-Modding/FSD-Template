#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GoogleAnalyticsSettings.generated.h"

UCLASS(config = Engine, DefaultConfig)
class GOOGLEANALYTICS_API UGoogleAnalyticsSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableIDFACollection;
    
    UGoogleAnalyticsSettings();
};

