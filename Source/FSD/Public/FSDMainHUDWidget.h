#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "FSDMainHUDWidget.generated.h"

class URadarPointComponent;
class UWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFSDMainHUDWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UFSDMainHUDWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PushEvent(UWidget* eventWidget, bool Left);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PopEvent(UWidget* eventWidget, bool Left);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRadarPointAdded(URadarPointComponent* Point);
    
public:
    UFUNCTION(BlueprintCallable)
    void AddRadarPoint(URadarPointComponent* Point);
    
};

