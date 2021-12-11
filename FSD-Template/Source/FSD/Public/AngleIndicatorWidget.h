#pragma once
#include "CoreMinimal.h"
#include "FSDUserWidget.h"
#include "AngleIndicatorWidget.generated.h"

UCLASS(Abstract, EditInlineNew)
class UAngleIndicatorWidget : public UFSDUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float pixelsPerAngle;
    
    UPROPERTY(EditAnywhere)
    float AlphaFade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxAngle;
    
public:
    UAngleIndicatorWidget();
};

