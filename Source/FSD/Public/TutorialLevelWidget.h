#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "FSDUserWidget.h"
#include "TutorialLevelWidget.generated.h"

class UTutorialContentWidget;

UCLASS(EditInlineNew)
class UTutorialLevelWidget : public UFSDUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float DelayBetweenTutorials;
    
public:
    UFUNCTION(BlueprintCallable)
    void ShowTutorialWidget(TSubclassOf<UTutorialContentWidget> TutorialWidget, bool ignoreQueue);
    
    UFUNCTION(BlueprintCallable)
    void RemoveTutorialWidget(UTutorialContentWidget* TutorialWidget);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllTutorials();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnTutorialFinished(UTutorialContentWidget* TutorialWidget);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNewActiveTutorial(UTutorialContentWidget* Widget);
    
    UTutorialLevelWidget();
};

