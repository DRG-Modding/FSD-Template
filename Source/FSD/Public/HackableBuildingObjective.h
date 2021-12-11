#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "Objective.h"
#include "HackableBuildingObjective.generated.h"

class UDebrisPositioning;
class AProceduralSetup;
class ARessuplyPod;

UCLASS()
class UHackableBuildingObjective : public UObjective {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    static void DropOverCharger(AProceduralSetup* setup, const FVector& buildingLocation, float idealRange, float idealZDistance, UDebrisPositioning* DebrisPositioning, TSubclassOf<ARessuplyPod> generatorClass);
    
    UHackableBuildingObjective();
};

