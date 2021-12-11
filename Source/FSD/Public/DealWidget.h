#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "DealWidget.generated.h"

UCLASS(Abstract, EditInlineNew)
class UDealWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateDealText();
    
    UDealWidget();
};

