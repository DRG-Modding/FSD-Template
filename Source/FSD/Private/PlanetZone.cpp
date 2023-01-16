#include "PlanetZone.h"

class UBiome;
class UFSDSaveGame;

bool UPlanetZone::IsUnlocked(UFSDSaveGame* SaveGame) const {
    return false;
}

FGuid UPlanetZone::GetSavegameID() const {
    return FGuid{};
}

TArray<UBiome*> UPlanetZone::GetBiomes() const {
    return TArray<UBiome*>();
}

UPlanetZone::UPlanetZone() {
    this->MustBeUnlocked = true;
}

