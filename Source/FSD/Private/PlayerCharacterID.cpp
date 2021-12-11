#include "PlayerCharacterID.h"
#include "Templates/SubclassOf.h"

class APlayerCharacter;

TSubclassOf<APlayerCharacter> UPlayerCharacterID::GetCharacterClass() const {
    return NULL;
}

APlayerCharacter* UPlayerCharacterID::GetCharacter() const {
    return NULL;
}

UPlayerCharacterID::UPlayerCharacterID() {
    this->CharacterData = NULL;
}

