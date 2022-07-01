#pragma once
#include "CoreMinimal.h"
#include "Components/SlateWrapperTypes.h"
#include "Blueprint/UserWidget.h"
#include "VisibilityChangedDelegateDelegate.h"
#include "FSDUserWidget.generated.h"

class APlayerCharacter;
class AFSDPlayerState;
class AItem;

UCLASS(Blueprintable, EditInlineNew)
class FSD_API UFSDUserWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVisibilityChangedDelegate OnVisibilityChangedFSD;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APlayerCharacter* Character;
    
public:
    UFSDUserWidget();
protected:
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
    
};

