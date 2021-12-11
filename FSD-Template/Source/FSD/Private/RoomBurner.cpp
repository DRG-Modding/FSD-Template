#include "RoomBurner.h"

class AProceduralSetup;
class URoomGenerator;

void ARoomBurner::SpawnEncounter(AProceduralSetup* setup) {
}

URoomGenerator* ARoomBurner::GetRoomGenerator() const {
    return NULL;
}

ARoomBurner::ARoomBurner() {
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
    this->TestEnemy = NULL;
    this->TestEnemyCount = 0;
    this->TestMutator = NULL;
    this->TestSpecialEvent = NULL;
    this->TestTreasure = NULL;
    this->MissionTemplate = NULL;
    this->CustomMissionTemplate = NULL;
    this->CSGWorld = NULL;
    this->PLSLiveEditor = NULL;
    this->LiveEditRoomGenerator = NULL;
}

