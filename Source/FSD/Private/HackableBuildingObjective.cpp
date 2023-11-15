#include "HackableBuildingObjective.h"
#include "Templates/SubclassOf.h"

UHackableBuildingObjective::UHackableBuildingObjective(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UHackableBuildingObjective::DropOverCharger(AProceduralSetup* Setup, const FVector& buildingLocation, float idealRange, float idealZDistance, UDebrisPositioning* DebrisPositioning, TSubclassOf<ARessuplyPod> generatorClass, bool AddImportantLocation) {
}


