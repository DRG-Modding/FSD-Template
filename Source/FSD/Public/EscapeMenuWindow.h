#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EMinersManualSection.h"
#include "WindowWidget.h"
#include "EscapeMenuWindow.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UEscapeMenuWindow : public UWindowWidget {
    GENERATED_BODY()
public:
    UEscapeMenuWindow();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenMinersManualFromID(EMinersManualSection Section, const FGuid& ID);
    
};

