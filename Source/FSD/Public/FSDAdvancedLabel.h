#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EFSDInputSource.h"
#include "Fonts/SlateFontInfo.h"
#include "ActionIconMapping.h"
#include "UObject/NoExportTypes.h"
#include "FSDAdvancedLabel.generated.h"

class UHorizontalBox;
class UTexture2D;
class UTextBlock;
class UImage;

UCLASS(Abstract, EditInlineNew)
class UFSDAdvancedLabel : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText FormattedText;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText ControllerOverrideText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool UpperCase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EFSDInputSource PreviewAs;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetText(FText NewText, FText OverrideControllerText);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetAlwaysShowAs(EFSDInputSource InPreferredSource);
    
public:
    UFUNCTION(BlueprintCallable)
    void Refresh();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReset();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNewLine(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void OnLanguageChanged(const FString& NewCulture);
    
    UFUNCTION(BlueprintCallable)
    void OnInputSourceChanged(EFSDInputSource Source);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAddString(const FString& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAddKeyName(const FString& Name);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAddIcon(const FString& Name, const FActionIconMapping& Icon);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetText();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsDesignTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFSDInputSource GetCurrentInputSource() const;
    
    UFUNCTION(BlueprintCallable)
    UTextBlock* CreateTextBlock(const FString& Text, FSlateFontInfo InFontInfo, FLinearColor Color);
    
    UFUNCTION(BlueprintCallable)
    UImage* CreateImageSized(UTexture2D* Texture, int32 Width, int32 Height);
    
    UFUNCTION(BlueprintCallable)
    UImage* CreateImage(UTexture2D* Texture, bool MatchSize);
    
    UFUNCTION(BlueprintCallable)
    UHorizontalBox* CreateHorizontalBox();
    
public:
    UFSDAdvancedLabel();
};

