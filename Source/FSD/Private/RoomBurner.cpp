#include "RoomBurner.h"

ARoomBurner::ARoomBurner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LiveUpdateEditor = false;
    this->MirrorTest = ERoomMirror::None;
    this->RoomGenerator = NULL;
    this->RoomRadius = 2500.00f;
    this->MirrorSupport = ERoomMirroringSupport::MirrorAroundX;
    this->ShowRoomCollider = false;
    this->Seed = -1;
    this->Biome = NULL;
    this->Difficulty = NULL;
    this->ForcePlayerCount = -1;
    this->GenerateDebris = true;
    this->GenerateItems = true;
    this->GenerateResources = true;
    this->SpawnEncounters = true;
    this->TestMutator = NULL;
    this->TestChallenge = NULL;
    this->TestSpecialEvent = NULL;
    this->TestTreasure = NULL;
    this->MissionTemplate = NULL;
    this->CustomMissionTemplate = NULL;
    this->TestObjective = NULL;
    this->CSGWorld = NULL;
    this->PLSLiveEditor = NULL;
    this->LiveEditRoomGenerator = NULL;
}

void ARoomBurner::SpawnEncounter(AProceduralSetup* Setup) {
}

URoomGenerator* ARoomBurner::GetRoomGenerator() const {
    return NULL;
}


