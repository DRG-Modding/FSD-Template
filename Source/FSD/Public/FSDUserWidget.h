#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/SlateWrapperTypes.h"
#include "FSDUserWidget.generated.h"

class APlayerCharacter;
class AItem;
class AFSDPlayerState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFSDUserWidgetOnVisibilityChanged, UUserWidget*, Widget, bool, IsVisible);

UCLASS(EditInlineNew)
class UFSDUserWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FFSDUserWidgetOnVisibilityChanged OnVisibilityChanged;
    
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    APlayerCharacter* Character;
    
    UFUNCTION(BlueprintCallable)
    void SetOpacity(float alpha);
    
public:
    UFUNCTION(BlueprintCallable)
    void ScaleByBaseResolution();
    
protected:
    UFUNCTION(BlueprintCallable)
    void Refresh();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveNewVisibility(ESlateVisibility NewVisibility);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCloseMenuReleased(bool& Handled);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCloseMenuPressed(bool& Handled);
    
    UFUNCTION(BlueprintCallable)
    bool HasCharacter();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetOpacity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFSDPlayerState* GetFSDPlayerState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AItem* GetEquippedItem() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBaseResolutionScale() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnRefresh();
    
public:
    UFSDUserWidget();
};

