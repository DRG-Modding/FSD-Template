#pragma once
#include "CoreMinimal.h"
#include "TickableActionBase.h"
#include "TextCounterEntry.h"
#include "MultiTextCounterAction.generated.h"

class UTextBlock;
class UMultiTextCounterAction;
class UObject;
class UAudioComponent;
class USoundCue;

UCLASS()
class UMultiTextCounterAction : public UTickableActionBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTickDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FTickDelegate Completed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FTickDelegate OnTick;
    
protected:
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    UTextBlock* TotalBlock;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FText TotalFormat;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<FTextCounterEntry> Entries;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    float CountSpeed;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    USoundCue* CountingSound;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    UAudioComponent* AudioComponent;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    UObject* WorldContext;
    
public:
    UMultiTextCounterAction();
    UFUNCTION(BlueprintCallable)
    static UMultiTextCounterAction* StartMultiTextCounter(UObject* InWorldContext, UTextBlock* InTotalBlock, const FText InTotalFormat, float InCountSpeed, USoundCue* InCountingSound, const TArray<FTextCounterEntry> InEntries);
    
};

