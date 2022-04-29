#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Objective.h"
#include "UObject/NoExportTypes.h"
#include "HackableBuildingObjective.generated.h"

class AProceduralSetup;
class UDebrisPositioning;
class ARessuplyPod;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UHackableBuildingObjective : public UObjective {
    GENERATED_BODY()
public:
    UHackableBuildingObjective();
    UFUNCTION(BlueprintCallable)
    static void DropOverCharger(AProceduralSetup* setup, const FVector& buildingLocation, float idealRange, float idealZDistance, UDebrisPositioning* DebrisPositioning, TSubclassOf<ARessuplyPod> generatorClass);
    
};

