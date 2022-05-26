#pragma once
#include "CoreMinimal.h"
#include "FSDUserWidget.h"
#include "EFSDInputSource.h"
#include "MouseCursorWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UMouseCursorWidget : public UFSDUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFSDInputSource TargetInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsHovering;
    
public:
    UMouseCursorWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUnhover();
    
    UFUNCTION(BlueprintCallable)
    void OnInputSourceChanged(EFSDInputSource Source);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHover();
    
};

