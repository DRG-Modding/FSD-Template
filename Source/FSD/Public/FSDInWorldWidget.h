#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "FSDInWorldWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFSDInWorldWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHUDVisibile;
    
public:
    UFSDInWorldWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveHUDVisibilityChanged(bool InHudVisible);
    
    UFUNCTION(BlueprintCallable)
    void CallbackHUDVisibilityChanged(bool InHudVisible);
    
};

