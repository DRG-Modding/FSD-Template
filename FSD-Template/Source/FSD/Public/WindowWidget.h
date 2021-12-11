#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "WindowWidget.generated.h"

class UWindowWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FWindowWidgetOnWindowClosed, UWindowWidget*, Window);

UCLASS(EditInlineNew)
class UWindowWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FWindowWidgetOnWindowClosed OnWindowClosed;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bHandleCloseCommand;
    
    UPROPERTY(EditAnywhere)
    bool bResolutionDownscaleWhenOpen;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveSelectPreviousCommand();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveSelectNextCommand();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveSelectCharacterCommand();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveOkCommand();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveCloseCommand();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShown();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNewTopWindow();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnClosed();
    
    UFUNCTION(BlueprintCallable)
    void ConsumeCommand();
    
public:
    UFUNCTION(BlueprintCallable)
    void CloseThisWindow();
    
    UWindowWidget();
};

