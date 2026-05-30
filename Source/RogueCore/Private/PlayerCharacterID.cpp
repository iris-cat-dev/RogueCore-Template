#include "PlayerCharacterID.h"
#include "Templates/SubclassOf.h"

UPlayerCharacterID::UPlayerCharacterID() {
    this->CharacterData = nullptr;
}

bool UPlayerCharacterID::HasValidCharacterData() const {
    return false;
}

UPlayerCharacterData* UPlayerCharacterID::GetCharacterData() const {
    return NULL;
}

TSubclassOf<APlayerCharacter> UPlayerCharacterID::GetCharacterClass() const {
    return NULL;
}

APlayerCharacter* UPlayerCharacterID::GetCharacterCDO() const {
    return NULL;
}


