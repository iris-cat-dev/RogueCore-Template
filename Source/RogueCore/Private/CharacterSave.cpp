#include "CharacterSave.h"

FCharacterSave::FCharacterSave() {
    this->XP = 0;
    this->TimesAscended = 0;
    this->HasSeenAscensionRewardScreen = false;
    this->SelectedLoadout = 0;
    this->SavegameID = FGuid();
    this->Vanity = FCharacterVanitySave();
    this->Loadout = FItemLoadout();
    this->RandomWeaponLoadout = FItemLoadout();
    this->RandomItemUpgradeLoadouts = FUpgradeLoadout();
    this->VictoryPose = FVictoryPoseSave();
    this->BoosterDecks = FSavedBoosterDecks();
    this->RewardSave = FRewardSave();
}

