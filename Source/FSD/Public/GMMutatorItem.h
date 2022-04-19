#pragma once
#include "CoreMinimal.h"
#include "GMMutatorItem.generated.h"

class UMutator;

USTRUCT(BlueprintType)
struct FGMMutatorItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMutator*> Mutators;
    
    FSD_API FGMMutatorItem();
};

