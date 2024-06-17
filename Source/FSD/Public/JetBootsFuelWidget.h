#pragma once
#include "CoreMinimal.h"
#include "FSDUserWidget.h"
#include "JetBootsFuelWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UJetBootsFuelWidget : public UFSDUserWidget {
    GENERATED_BODY()
public:
    UJetBootsFuelWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowMK2(bool IsVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetProgress(float CurrentProgress, bool overheated);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetIsActive(bool IsActive);
    
};

