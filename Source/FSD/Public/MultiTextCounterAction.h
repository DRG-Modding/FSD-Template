#pragma once
#include "CoreMinimal.h"
#include "TextCounterEntry.h"
#include "TickableActionBase.h"
#include "MultiTextCounterAction.generated.h"

class UAudioComponent;
class UMultiTextCounterAction;
class UObject;
class USoundCue;
class UTextBlock;

UCLASS(Blueprintable)
class UMultiTextCounterAction : public UTickableActionBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTickDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTickDelegate Completed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTickDelegate OnTick;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTextBlock* TotalBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FText TotalFormat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FTextCounterEntry> Entries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CountSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USoundCue* CountingSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAudioComponent* AudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* WorldContext;
    
public:
    UMultiTextCounterAction();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="InWorldContext"))
    static UMultiTextCounterAction* StartMultiTextCounter(UObject* InWorldContext, UTextBlock* InTotalBlock, const FText InTotalFormat, float InCountSpeed, USoundCue* InCountingSound, const TArray<FTextCounterEntry> InEntries);
    
};

