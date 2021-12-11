#pragma once
#include "CoreMinimal.h"
#include "Mutator.h"
#include "IRandRange.h"
#include "ForceStationaryEncounterMutator.generated.h"

class UEnemyGroupDescriptor;

UCLASS(EditInlineNew)
class UForceStationaryEncounterMutator : public UMutator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UEnemyGroupDescriptor* EnemyGroup;
    
    UPROPERTY(EditAnywhere)
    FIRandRange GroupSize;
    
    UForceStationaryEncounterMutator();
};

