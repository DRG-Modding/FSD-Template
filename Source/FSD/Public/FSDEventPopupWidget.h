#pragma once
#include "CoreMinimal.h"
#include "WindowWidget.h"
#include "FSDEventPopupWidget.generated.h"

class UFSDEvent;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFSDEventPopupWidget : public UWindowWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFSDEvent* FSDEvent;
    
    UFSDEventPopupWidget();
};

