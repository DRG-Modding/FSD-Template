#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "WidgetAnimationSettings.generated.h"

USTRUCT(BlueprintType)
struct FWidgetAnimationSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlaybackSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EUMGSequencePlayMode::Type> PlayMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRestoreState;
    
    FSD_API FWidgetAnimationSettings();
};

