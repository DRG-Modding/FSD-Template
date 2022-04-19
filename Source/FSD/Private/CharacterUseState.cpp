#include "CharacterUseState.h"

FCharacterUseState::FCharacterUseState() {
    this->ActiveUsable = NULL;
    this->Key = EInputKeys::Use;
    this->UseId = 0;
}

