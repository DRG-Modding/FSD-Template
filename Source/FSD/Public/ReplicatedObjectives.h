#pragma once
#include "CoreMinimal.h"
#include "ReplicatedObjectives.generated.h"

class UObjective;

USTRUCT(BlueprintType)
struct FReplicatedObjectives {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool HasReplicated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TArray<UObjective*> Objectives;
    
    FSD_API FReplicatedObjectives();
};

