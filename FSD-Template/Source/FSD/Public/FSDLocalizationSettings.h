#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "FSDTranslationProgress.h"
#include "FSDLocalizationSettings.generated.h"

UCLASS(DefaultConfig, Config=Game)
class UFSDLocalizationSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Config, EditAnywhere)
    TArray<FFSDTranslationProgress> CommunityTranslationProgress;
    
public:
    UFSDLocalizationSettings();
};

