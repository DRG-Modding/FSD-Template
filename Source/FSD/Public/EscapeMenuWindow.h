#pragma once
#include "CoreMinimal.h"
#include "EMinersManualSection.h"
#include "WindowWidget.h"
#include "UObject/NoExportTypes.h"
#include "EscapeMenuWindow.generated.h"

UCLASS(EditInlineNew)
class UEscapeMenuWindow : public UWindowWidget {
    GENERATED_BODY()
public:
    UEscapeMenuWindow();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenMinersManualFromID(EMinersManualSection Section, const FGuid& ID);
    
};

