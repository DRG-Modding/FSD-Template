#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "YesNoPromptSettings.h"
#include "YesNoPromptWidget.h"
#include "YesNoPromptAction.generated.h"

class UObject;
class UResourceData;
class UYesNoPromptAction;
class UYesNoPromptWidget;

UCLASS(Blueprintable)
class UYesNoPromptAction : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FYesNoOutputPin);
    
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYesNoOutputPin Yes;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYesNoOutputPin No;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UYesNoPromptWidget::FOnYesNoClickedDelegate YesNoDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UYesNoPromptWidget> ActivePrompt;
    
public:
    UYesNoPromptAction();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static UYesNoPromptAction* PromptYesNo(UObject* WorldContext, FYesNoPromptSettings Prompt);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static UYesNoPromptAction* PromptPurchase(UObject* WorldContext, FYesNoPromptSettings Prompt, const TMap<UResourceData*, int32>& Resources);
    
protected:
    UFUNCTION(BlueprintCallable)
    void PromptCallback(bool YesClicked);
    
};

