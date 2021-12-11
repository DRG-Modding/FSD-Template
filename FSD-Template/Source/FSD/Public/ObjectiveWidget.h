#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ObjectiveWidget.generated.h"

class UObjective;
class UObjectiveWidget;
class UTexture2D;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FObjectiveWidgetOnObjectiveWidgetUpdated, UObjectiveWidget*, InObjectiveWidget);

UCLASS(Abstract, EditInlineNew)
class UObjectiveWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FObjectiveWidgetOnObjectiveWidgetUpdated OnObjectiveWidgetUpdated;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Export)
    UObjective* MissionObjective;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bIsPrimaryObjective;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText ObjectiveText;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText ObjectiveCounterText;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UTexture2D* ObjectiveCounterIcon;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bObjectiveCompleted;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetText(const FText& InText, const FText& InCounterText, UTexture2D* InCounterIcon, bool InObjectiveCompleted);
    
    UFUNCTION(BlueprintCallable)
    void SetSimpleText(const FText& InText, bool InObjectiveCompleted);
    
    UFUNCTION(BlueprintCallable)
    void SetObjective(UObjective* InObjective, bool InIsPrimaryObjective);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveObjectiveUpdated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveObjectiveInitialized();
    
    UFUNCTION(BlueprintCallable)
    void OnObjectiveUpdated(UObjective* InObjective);
    
public:
    UObjectiveWidget();
};

