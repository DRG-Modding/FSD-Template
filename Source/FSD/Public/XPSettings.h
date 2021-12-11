#pragma once
#include "CoreMinimal.h"
#include "XPSettings.generated.h"

USTRUCT()
struct FXPSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float XP_PerGold;
    
    UPROPERTY(EditAnywhere)
    float XP_PerKill;
    
    UPROPERTY(EditAnywhere)
    float XP_OnSurvivedLevel;
    
    FSD_API FXPSettings();
};

