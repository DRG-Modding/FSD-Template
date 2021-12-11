#pragma once
#include "CoreMinimal.h"
#include "GMMutatorItem.generated.h"

class UMutator;

USTRUCT(BlueprintType)
struct FGMMutatorItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient)
    TArray<UMutator*> Mutators;
    
    FSD_API FGMMutatorItem();
};

