#pragma once
#include "CoreMinimal.h"
#include "ReplicatedObjectives.generated.h"

class UObjective;

USTRUCT(BlueprintType)
struct FReplicatedObjectives {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    bool HasReplicated;
    
    UPROPERTY(Export, Transient)
    TArray<UObjective*> Objectives;
    
    FSD_API FReplicatedObjectives();
};

