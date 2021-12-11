#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "FSDMainHUDWidget.generated.h"

class URadarPointComponent;

UCLASS(Abstract, EditInlineNew)
class UFSDMainHUDWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRadarPointAdded(URadarPointComponent* Point);
    
public:
    UFUNCTION(BlueprintCallable)
    void AddRadarPoint(URadarPointComponent* Point);
    
    UFSDMainHUDWidget();
};

