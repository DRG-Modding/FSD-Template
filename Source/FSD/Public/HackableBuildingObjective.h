#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Objective.h"
#include "Templates/SubclassOf.h"
#include "HackableBuildingObjective.generated.h"

class AProceduralSetup;
class ARessuplyPod;
class UDebrisPositioning;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UHackableBuildingObjective : public UObjective {
    GENERATED_BODY()
public:
    UHackableBuildingObjective();
    UFUNCTION(BlueprintCallable)
    static void DropOverCharger(AProceduralSetup* Setup, const FVector& buildingLocation, float idealRange, float idealZDistance, UDebrisPositioning* DebrisPositioning, TSubclassOf<ARessuplyPod> generatorClass);
    
};

