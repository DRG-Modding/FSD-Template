#pragma once
#include "CoreMinimal.h"
#include "Mutator.h"
#include "Templates/SubclassOf.h"
#include "ForcedSecondaryMutator.generated.h"

class UObjective;

UCLASS(Blueprintable, EditInlineNew)
class UForcedSecondaryMutator : public UMutator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UObjective> ForceSecondaryObjective;
    
    UForcedSecondaryMutator();

};

