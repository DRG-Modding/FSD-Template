#pragma once
#include "CoreMinimal.h"
#include "FSDUserWidget.h"
#include "TutorialContentWidget.generated.h"

class UTutorialContentWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTutorialContentWidgetOnTutorialFinished, UTutorialContentWidget*, TutorialWidget);

UCLASS(EditInlineNew)
class UTutorialContentWidget : public UFSDUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FTutorialContentWidgetOnTutorialFinished OnTutorialFinished;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShown();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRemoveWidget();
    
    UTutorialContentWidget();
};

