#pragma once
#include "CoreMinimal.h"
#include "XPSettings.generated.h"

USTRUCT(BlueprintType)
struct FXPSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float XP_PerGold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float XP_PerKill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float XP_OnSurvivedLevel;
    
    FSD_API FXPSettings();
};

