#include "CharacterUseState.h"

FCharacterUseState::FCharacterUseState() {
    this->ActiveUsable = nullptr;
    this->Key = EInputKeys::Use;
    this->UseId = 0;
}

