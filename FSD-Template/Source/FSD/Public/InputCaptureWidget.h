#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CustomKeySetting.h"
#include "EKeyBindingSlot.h"
#include "InputCoreTypes.h"
#include "InputCaptureWidget.generated.h"

UCLASS(EditInlineNew)
class FSD_API UInputCaptureWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FCustomKeySetting Settings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EKeyBindingSlot InputSlot;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bIsGamepadKey;
    
    UPROPERTY(BlueprintReadOnly)
    bool bCapturing;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetData(const FCustomKeySetting InSettings, EKeyBindingSlot InInputSlot, bool InIsGamepadKey);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetCurrentBinding(const FKey& InKey);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveKeyChanged(FKey InKey);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveKeyCaptured(FKey InKey);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveCapturingChanged(bool InCapturing);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKey GetCurrentBinding() const;
    
    UFUNCTION(BlueprintCallable)
    bool FindCurrentSettingsForKey(const FKey& InKey, FCustomKeySetting& OutSettings);
    
    UFUNCTION(BlueprintCallable)
    void ClearCurrentBinding();
    
    UFUNCTION(BlueprintCallable)
    void BindActionToKey(const FCustomKeySetting& InAction, const FKey& InKey, EKeyBindingSlot InSlot, bool SaveToDisk);
    
public:
    UInputCaptureWidget();
};

