#pragma once
#include "CoreMinimal.h"
#include "FSDUserWidget.h"
#include "TutorialWidget.generated.h"

class UTexture2D;

UCLASS(Abstract, EditInlineNew)
class UTutorialWidget : public UFSDUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    float RemainingVisibleTime;
    
public:
    UFUNCTION(BlueprintCallable)
    void Show(const FText& Text, const FText& Title, const FText& TaskText, UTexture2D* Image, float Duration);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShow(const FText& Text, const FText& Title, const FText& TaskText, UTexture2D* Image);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHide(bool watched);
    
public:
    UFUNCTION(BlueprintCallable)
    void Hide(bool watched);
    
    UFUNCTION(BlueprintCallable)
    void ChangeHintDuration(float NewDuration);
    
    UTutorialWidget();
};

