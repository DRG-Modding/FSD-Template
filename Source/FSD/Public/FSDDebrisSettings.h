#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "UObject/NoExportTypes.h"
#include "FSDDebrisSettings.generated.h"

UCLASS(DefaultConfig, Config=Game)
class UFSDDebrisSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Config, EditAnywhere)
    FSoftObjectPath DefaultInfluencerDensityCurve;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftObjectPath DefaultInfluencerSizeCurve;
    
public:
    UFSDDebrisSettings();
};

