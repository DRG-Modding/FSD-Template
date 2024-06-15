#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "RefineryExtractorPodWidget.generated.h"

class UObjective;

UCLASS(Blueprintable, EditInlineNew)
class URefineryExtractorPodWidget : public UUserWidget {
    GENERATED_BODY()
public:
    URefineryExtractorPodWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetProgress(const float InProgress);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnObjectiveUpdated(UObjective* Objective);
    
};

