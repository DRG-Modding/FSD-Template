#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MasteryIconWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UMasteryIconWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UMasteryIconWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveUnlocked();
    
};

