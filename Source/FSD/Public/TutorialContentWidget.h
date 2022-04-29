#pragma once
#include "CoreMinimal.h"
#include "FSDUserWidget.h"
#include "TutorialContentWidget.generated.h"

class UTutorialContentWidget;

UCLASS(Blueprintable, EditInlineNew)
class UTutorialContentWidget : public UFSDUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTutorialFinished, UTutorialContentWidget*, TutorialWidget);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTutorialFinished OnTutorialFinished;
    
    UTutorialContentWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShown();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRemoveWidget();
    
};

