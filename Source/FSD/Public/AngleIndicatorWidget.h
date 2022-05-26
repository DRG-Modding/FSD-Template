#pragma once
#include "CoreMinimal.h"
#include "FSDUserWidget.h"
#include "AngleIndicatorWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAngleIndicatorWidget : public UFSDUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float pixelsPerAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AlphaFade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxAngle;
    
public:
    UAngleIndicatorWidget();
};

