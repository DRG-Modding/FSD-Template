#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "OptionalObjectiveWidget.generated.h"

class UOptionalObjectiveWidget;
class UObjective;

UCLASS(Abstract, EditInlineNew)
class UOptionalObjectiveWidget : public UUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOptionalObjectiveWidgetDelegate, UOptionalObjectiveWidget*, InOptionalObjectiveWidget);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FOptionalObjectiveWidgetDelegate OnWidgetUpdated;
    
    UOptionalObjectiveWidget();
    UFUNCTION(BlueprintCallable)
    void SignalWidgetUpdated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetObjective(UObjective* obj);
    
};

