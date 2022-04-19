#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "YesNoPromptSettings.h"
#include "YesNoPromptWidget.h"
#include "YesNoPromptAction.generated.h"

class UYesNoPromptWidget;
class UYesNoPromptAction;
class UResourceData;
class UObject;

UCLASS()
class UYesNoPromptAction : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FYesNoOutputPin);
    
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FYesNoOutputPin Yes;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FYesNoOutputPin No;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UYesNoPromptWidget::FOnYesNoClickedDelegate YesNoDelegate;
    
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UYesNoPromptWidget> ActivePrompt;
    
public:
    UYesNoPromptAction();
    UFUNCTION(BlueprintCallable)
    static UYesNoPromptAction* PromptYesNo(UObject* WorldContext, FYesNoPromptSettings Prompt);
    
    UFUNCTION(BlueprintCallable)
    static UYesNoPromptAction* PromptPurchase(UObject* WorldContext, FYesNoPromptSettings Prompt, const TMap<UResourceData*, int32>& Resources);
    
protected:
    UFUNCTION(BlueprintCallable)
    void PromptCallback(bool YesClicked);
    
};

