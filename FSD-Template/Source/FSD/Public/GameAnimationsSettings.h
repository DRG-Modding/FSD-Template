#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "UObject/NoExportTypes.h"
#include "GameAnimationsSettings.generated.h"

UCLASS(DefaultConfig, Config=Game)
class UGameAnimationsSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Config, EditAnywhere)
    FSoftObjectPath FootstepTestingSound;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftObjectPath FootstepTestingParticles;
    
public:
    UGameAnimationsSettings();
};

