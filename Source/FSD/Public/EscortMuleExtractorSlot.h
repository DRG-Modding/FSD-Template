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
    UPROPERTY(BlueprintReadWrite)
    EEscortExtractorState ExtractorState;
    
    UPROPERTY(NotReplicated, Transient)
    EEscortExtractorState LastState;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient)
    USceneComponent* AttachPoint;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient)
    UInstantUsable* Usable;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient)
    UWidgetComponent* Widget;
    
    FSD_API FEscortMuleExtractorSlot();
};

