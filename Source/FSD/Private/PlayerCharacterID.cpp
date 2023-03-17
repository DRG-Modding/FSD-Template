#include "PlayerCharacterID.h"
#include "Templates/SubclassOf.h"

UPlayerCharacterData* UPlayerCharacterID::GetCharacterData() const {
    return NULL;
}

TSubclassOf<APlayerCharacter> UPlayerCharacterID::GetCharacterClass() const {
    return NULL;
}

APlayerCharacter* UPlayerCharacterID::GetCharacter() const {
    return NULL;
}

UPlayerCharacterID::UPlayerCharacterID() {
    this->CharacterData = NULL;
}

