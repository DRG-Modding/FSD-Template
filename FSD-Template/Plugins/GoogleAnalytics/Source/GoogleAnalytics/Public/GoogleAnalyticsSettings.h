#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GoogleAnalyticsSettings.generated.h"

UCLASS(config = Engine, defaultconfig)
class GOOGLEANALYTICS_API UGoogleAnalyticsSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    bool bEnableIDFACollection;
    
    UGoogleAnalyticsSettings();
};

