#pragma once
#include "CoreMinimal.h"
#include "IRandRange.h"
#include "Mutator.h"
#include "ForceStationaryEncounterMutator.generated.h"

class UEnemyGroupDescriptor;

UCLASS(Blueprintable, EditInlineNew)
class UForceStationaryEncounterMutator : public UMutator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnemyGroupDescriptor* EnemyGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRandRange GroupSize;
    
    UForceStationaryEncounterMutator();
};

