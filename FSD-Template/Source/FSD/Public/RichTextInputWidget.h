#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "UObject/NoExportTypes.h"
#include "Styling/SlateTypes.h"
#include "EFSDInputSource.h"
#include "InputDisplay.h"
#include "RichTextInputWidget.generated.h"

class URichTextBlock;
class UTextBlock;

UCLASS(Abstract, EditInlineNew, HideDropdown)
class URichTextInputWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName InputName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<FName, FString> MetaData;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Content;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FTextBlockStyle TextStyle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EFSDInputSource InputSource;
    
    UPROPERTY(BlueprintReadOnly, Export)
    URichTextBlock* RichTextBlock;
    
    UFUNCTION(BlueprintCallable)
    void ScaleTextBlockToHeight(UTextBlock* InTextBlock, float LineHeight);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveInputUnknown();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveInputDetails(const FInputDisplay& InDisplay);
    
    UFUNCTION(BlueprintCallable)
    void OnInputSourceChanged(EFSDInputSource InSource);
    
    UFUNCTION(BlueprintCallable)
    void OnCustomKeyBindsChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D MeasureTextSize(const FText& Text, float Scale) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLineHeight() const;
    
    UFUNCTION(BlueprintCallable)
    void ApplyTextStyle(UTextBlock* InTextBlock, const FTextBlockStyle& InTextStyle);
    
public:
    URichTextInputWidget();
};

