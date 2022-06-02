#include "EnemyDescriptor.h"
#include "Templates/SubclassOf.h"

class UBiome;
class APawn;
class UEnemyDescriptor;

TSubclassOf<APawn> UEnemyDescriptor::GetEnemyClass(UBiome* Biome, bool IsElite) const {
    return NULL;
}

TArray<UEnemyDescriptor*> UEnemyDescriptor::FindDescriptorsForCheatMenu(EEnemyDescriptorCheatClass NewCheatClass) {
    return TArray<UEnemyDescriptor*>();
}

TArray<UEnemyDescriptor*> UEnemyDescriptor::FindAllDescriptorsForCheatMenu() {
    return TArray<UEnemyDescriptor*>();
}

UEnemyDescriptor::UEnemyDescriptor() {
    this->EnemyID = NULL;
    this->VeteranScaling = EVeteranScaling::NormalEnemy;
    this->EnemySignificance = EEnemySignificance::Swarmer;
    this->UsesSpawnEffects = true;
    this->CreatureSize = ECreatureSize::Tiny;
    this->Positioning = NULL;
    this->PlacementCategories = 0;
    this->CaveInfluencer = NULL;
    this->InfluencerRange = 1000.00f;
    this->PlacementCarver = NULL;
    this->PathfinderType = DeepPathFinderType::Walk;
    this->SpawnSpread = 300.00f;
    this->IdealSpawnSize = 10;
    this->CanBeUsedForConstantPressure = false;
    this->CanBeUsedInEncounters = true;
    this->DifficultyRating = 10.00f;
    this->MinSpawnCount = 1;
    this->MaxSpawnCount = 9999;
    this->Rarity = 1.00f;
    this->SpawnAmountModifier = 1.00f;
    this->RequiredMainCampaignProgress = 0;
    this->UsesSpawnRarityModifiers = false;
    this->SpawnRarityModifiers.AddDefaulted(4);
    this->CheatClass = EEnemyDescriptorCheatClass::Basic;
}

