#pragma once
#include "CoreMinimal.h"
#include "FSDUserWidget.h"
#include "AngleIndicatorWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAngleIndicatorWidget : public UFSDUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float pixelsPerAngle;
    
    UPROPERTY(EditAnywhere)
    float AlphaFade;
    
    UPROPERTY(EditAnywhere)
    float MinAngle;
    
    UPROPERTY(EditAnywhere)
    float MaxAngle;
    
public:
    UAngleIndicatorWidget();
};

