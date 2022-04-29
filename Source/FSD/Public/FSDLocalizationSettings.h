#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "FSDTranslationProgress.h"
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

