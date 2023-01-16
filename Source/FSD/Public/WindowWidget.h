#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "Blueprint/UserWidget.h"
#include "WindowWidget.generated.h"

class UWindowWidget;

UCLASS(Blueprintable, EditInlineNew)
class FSD_API UWindowWidget : public UUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FWindowDelegate, UWindowWidget*, Window);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWindowDelegate OnWindowClosed;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHandleCloseCommand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bResolutionDownscaleWhenOpen;
    
public:
    UWindowWidget();
protected:
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
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ReceiveCanCloseWindow(FName InActionName, FKey InKey, bool InIsMouseEvent);
    
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
    
};

