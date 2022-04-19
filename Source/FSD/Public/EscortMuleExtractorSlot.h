#pragma once
#include "CoreMinimal.h"
#include "EEscortExtractorState.h"
#include "EscortMuleExtractorSlot.generated.h"

class USceneComponent;
class UInstantUsable;
class UWidgetComponent;

USTRUCT(BlueprintType)
struct FEscortMuleExtractorSlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    EEscortExtractorState ExtractorState;
    
    UPROPERTY(BlueprintReadWrite, NotReplicated, Transient, meta=(AllowPrivateAccess=true))
    EEscortExtractorState LastState;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    USceneComponent* AttachPoint;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    UInstantUsable* Usable;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    UWidgetComponent* Widget;
    
    FSD_API FEscortMuleExtractorSlot();
};

