#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "OptionalObjectiveWidget.generated.h"

class UObjective;
class UOptionalObjectiveWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UOptionalObjectiveWidget : public UUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOptionalObjectiveWidgetDelegate, UOptionalObjectiveWidget*, InOptionalObjectiveWidget);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOptionalObjectiveWidgetDelegate OnWidgetUpdated;
    
    UOptionalObjectiveWidget();
    UFUNCTION(BlueprintCallable)
    void SignalWidgetUpdated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetObjective(UObjective* obj);
    
};

