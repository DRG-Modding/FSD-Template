#include "GeneratedMission.h"
#include "Templates/SubclassOf.h"

class AFSDPlayerController;
class AProceduralSetup;
class UMutator;
class UMissionDNA;
class UGeneratedMission;


bool UGeneratedMission::IsSingleMission() const {
    return false;
}

bool UGeneratedMission::IsLocked(AFSDPlayerController* Player) const {
    return false;
}

bool UGeneratedMission::IsDeepDive() const {
    return false;
}

FObjectiveMissionIcon UGeneratedMission::GetSecondaryObjectiveIcon() const {
    return FObjectiveMissionIcon{};
}

TSubclassOf<AProceduralSetup> UGeneratedMission::GetPLS() const {
    return NULL;
}

TArray<UMutator*> UGeneratedMission::GetMutators(TSubclassOf<UMutator> mutatorClass) const {
    return TArray<UMutator*>();
}

float UGeneratedMission::GetMissionScale() const {
    return 0.0f;
}

UMissionDNA* UGeneratedMission::GetMissionDNA() const {
    return NULL;
}

AProceduralSetup* UGeneratedMission::CreatePLS(int32 NewSeed) {
    return NULL;
}

bool UGeneratedMission::AreMissionsEqual(UGeneratedMission* Other) const {
    return false;
}

UGeneratedMission::UGeneratedMission() {
    this->Biome = NULL;
    this->Seed = 0;
    this->GlobalSeed = 0;
    this->Template = NULL;
    this->PrimaryObjective = NULL;
    this->SecondaryObjective = NULL;
    this->MissionMutator = NULL;
    this->ComplexityLimit = NULL;
    this->DurationLimit = NULL;
    this->MissionDNA = NULL;
    this->MissionStructure = EMissionStructure::SingleMission;
}

