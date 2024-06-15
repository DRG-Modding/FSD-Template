#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ButtonData.h"
#include "ButtonWidget.generated.h"

class UButton;
class UButtonWidget;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class FSD_API UButtonWidget : public UUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FButtonWidgetDelegate, UButtonWidget*, InButton);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FButtonWidgetDelegate OnClicked;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FButtonWidgetDelegate OnHovered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FButtonWidgetDelegate OnUnhovered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FButtonWidgetDelegate OnEnabledChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FButtonWidgetDelegate OnSelectedChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FButtonWidgetDelegate OnDataChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bButtonEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bButtonSelected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FButtonData Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bButtonHovered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UButton* InnerButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AnimButtonHover;
    
public:
    UButtonWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void Unhovered();
    
public:
    UFUNCTION(BlueprintCallable)
    bool ToggleButtonSelected();
    
    UFUNCTION(BlueprintCallable)
    void SetButtonSelected(bool InSelected);
    
    UFUNCTION(BlueprintCallable)
    void SetButtonEnabled(bool InEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetButtonData(const FButtonData& InData);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceivedUnhovered();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceivedSelectedChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceivedHovered();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceivedEnabledChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceivedDataChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceivedClicked();
    
    UFUNCTION(BlueprintCallable)
    void Hovered();
    
public:
    UFUNCTION(BlueprintCallable)
    void Click();
    
    UFUNCTION(BlueprintCallable)
    void ClearEventBindings();
    
};

