#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "FSDInWorldWidget.generated.h"

UCLASS(Abstract, EditInlineNew)
class UFSDInWorldWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    bool bHUDVisibile;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveHUDVisibilityChanged(bool InHudVisible);
    
    UFUNCTION(BlueprintCallable)
    void CallbackHUDVisibilityChanged(bool InHudVisible);
    
public:
    UFSDInWorldWidget();
};

