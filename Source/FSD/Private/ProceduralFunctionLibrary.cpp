#include "ProceduralFunctionLibrary.h"
#include "Templates/SubclassOf.h"

class UObject;
class AProceduralSetup;
class UFXSystemAsset;
class UObjective;
class UBiome;
class UDebrisPositioning;

void UProceduralFunctionLibrary::SpawnTerrainImpact(UObject* WorldContextObject, UFXSystemAsset* particle, const FVector& Location, FRotator Rotation) {
}

AProceduralSetup* UProceduralFunctionLibrary::GetProceduralSetup(UObject* WorldContextObject) {
    return NULL;
}

int32 UProceduralFunctionLibrary::GetObjectiveXP(TSubclassOf<UObjective> objectiveClass, float missionLength) {
    return 0;
}

int32 UProceduralFunctionLibrary::GetObjectiveCredits(TSubclassOf<UObjective> objectiveClass, float missionLength) {
    return 0;
}

UBiome* UProceduralFunctionLibrary::GetBiome(TSubclassOf<AProceduralSetup> levelSetup) {
    return NULL;
}

void UProceduralFunctionLibrary::CreateEntrances(AProceduralSetup* pls, FRoomNode& Room, int32 exitCount, int32 entranceCount, UDebrisPositioning* exitPositioning, UDebrisPositioning* entrancePositioning) {
}

bool UProceduralFunctionLibrary::AllControllersFinishedTransitionToPlay(UObject* WorldContextObject) {
    return false;
}

UProceduralFunctionLibrary::UProceduralFunctionLibrary() {
}

