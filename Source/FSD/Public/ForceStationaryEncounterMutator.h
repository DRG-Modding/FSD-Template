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
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnemyGroupDescriptor* EnemyGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRandRange GroupSize;
    
    UForceStationaryEncounterMutator();
};

