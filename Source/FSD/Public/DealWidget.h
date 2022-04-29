#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "DealWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UDealWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UDealWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateDealText();
    
};

