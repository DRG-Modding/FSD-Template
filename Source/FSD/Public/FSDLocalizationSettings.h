#pragma once
#include "CoreMinimal.h"
#include "FSDTranslationProgress.h"
#include "Engine/DeveloperSettings.h"
#include "FSDLocalizationSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class UFSDLocalizationSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFSDTranslationProgress> CommunityTranslationProgress;
    
public:
    UFSDLocalizationSettings();
};

