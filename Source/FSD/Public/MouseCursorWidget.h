#pragma once
#include "CoreMinimal.h"
#include "FSDUserWidget.h"
#include "EFSDInputSource.h"
#include "MouseCursorWidget.generated.h"

UCLASS(Abstract, EditInlineNew)
class UMouseCursorWidget : public UFSDUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    EFSDInputSource TargetInput;
    
    UPROPERTY(BlueprintReadOnly)
    bool bIsHovering;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUnhover();
    
    UFUNCTION(BlueprintCallable)
    void OnInputSourceChanged(EFSDInputSource Source);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHover();
    
public:
    UMouseCursorWidget();
};

