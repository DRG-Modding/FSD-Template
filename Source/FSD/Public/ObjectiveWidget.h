#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ObjectiveWidget.generated.h"

class UObjectiveWidget;
class UObjective;
class UTexture2D;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UObjectiveWidget : public UUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FObjectiveWidgetDelegate, UObjectiveWidget*, InObjectiveWidget);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FObjectiveWidgetDelegate OnObjectiveWidgetUpdated;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UObjective* MissionObjective;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPrimaryObjective;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ObjectiveText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ObjectiveCounterText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* ObjectiveCounterIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bObjectiveCompleted;
    
public:
    UObjectiveWidget();
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
    
};

