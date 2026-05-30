#include "JettyBootNPC.h"

FJettyBootNPC::FJettyBootNPC() {
    this->HasPlayedChance = 0.00f;
    this->CharacterName = FString();
    this->ScoreInterval = FIRandRange();
}

