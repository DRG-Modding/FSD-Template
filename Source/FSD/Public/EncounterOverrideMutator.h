#pragma once
#include "CoreMinimal.h"
#include "Mutator.h"
#include "EncounterOverrideMutator.generated.h"

UCLASS(EditInlineNew)
class UEncounterOverrideMutator : public UMutator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float MobileEncounterScale;
    
    UPROPERTY(EditAnywhere)
    float StationaryEncounterScale;
    
    UEncounterOverrideMutator();
};

