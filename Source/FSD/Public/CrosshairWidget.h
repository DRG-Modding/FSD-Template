#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CrosshairWidget.generated.h"

class AItem;

UCLASS(Blueprintable, EditInlineNew)
class UCrosshairWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UCrosshairWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetData(AItem* Item);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpgraded(AItem* Item);
    
};

