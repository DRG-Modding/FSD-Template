#pragma once
#include "CoreMinimal.h"
#include "TickableActionBase.h"
#include "TextCounterEntry.h"
#include "MultiTextCounterAction.generated.h"

class UTextBlock;
class UAudioComponent;
class USoundCue;
class UObject;
class UMultiTextCounterAction;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FMultiTextCounterActionCompleted);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FMultiTextCounterActionOnTick);

UCLASS()
class UMultiTextCounterAction : public UTickableActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FMultiTextCounterActionCompleted Completed;
    
    UPROPERTY(BlueprintAssignable)
    FMultiTextCounterActionOnTick OnTick;
    
protected:
    UPROPERTY(Export, Transient)
    UTextBlock* TotalBlock;
    
    UPROPERTY(Transient)
    FText TotalFormat;
    
    UPROPERTY(Transient)
    TArray<FTextCounterEntry> Entries;
    
    UPROPERTY(Transient)
    float CountSpeed;
    
    UPROPERTY(Transient)
    USoundCue* CountingSound;
    
    UPROPERTY(Export, Transient)
    UAudioComponent* AudioComponent;
    
    UPROPERTY(Transient)
    UObject* WorldContext;
    
public:
    UFUNCTION(BlueprintCallable)
    static UMultiTextCounterAction* StartMultiTextCounter(UObject* InWorldContext, UTextBlock* InTotalBlock, const FText InTotalFormat, float InCountSpeed, USoundCue* InCountingSound, const TArray<FTextCounterEntry> InEntries);
    
    UMultiTextCounterAction();
};

