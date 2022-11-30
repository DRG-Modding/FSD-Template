#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "YesNoPromptWidget.h"
#include "YesNoPromptSettings.h"
#include "YesNoPromptAction.generated.h"

class UYesNoPromptWidget;
class UYesNoPromptAction;
class UObject;
class UResourceData;

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
    
    UPROPERTY(EditAnywhere, Export)
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

