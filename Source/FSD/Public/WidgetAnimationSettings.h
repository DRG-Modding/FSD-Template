#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "WidgetAnimationSettings.generated.h"

USTRUCT(BlueprintType)
struct FWidgetAnimationSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PlaybackSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EUMGSequencePlayMode::Type> PlayMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bRestoreState;
    
    FSD_API FWidgetAnimationSettings();
};

