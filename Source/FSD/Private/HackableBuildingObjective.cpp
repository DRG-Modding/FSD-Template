#include "HackableBuildingObjective.h"
#include "Templates/SubclassOf.h"

class AProceduralSetup;
class UDebrisPositioning;
class ARessuplyPod;

void UHackableBuildingObjective::DropOverCharger(AProceduralSetup* setup, const FVector& buildingLocation, float idealRange, float idealZDistance, UDebrisPositioning* DebrisPositioning, TSubclassOf<ARessuplyPod> generatorClass) {
}

UHackableBuildingObjective::UHackableBuildingObjective() {
}

