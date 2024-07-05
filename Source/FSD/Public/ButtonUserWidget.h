#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ButtonUserWidget.generated.h"

class UWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UButtonUserWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UButtonUserWidget();

private:
    UFUNCTION(BlueprintCallable)
    void InnerButtonUnhovered();
    
    UFUNCTION(BlueprintCallable)
    void InnerButtonHovered();
    
    UFUNCTION(BlueprintCallable)
    UWidget* InnerButtonGetToolTip();
    
    UFUNCTION(BlueprintCallable)
    void InnerButtonClicked();
    
};

