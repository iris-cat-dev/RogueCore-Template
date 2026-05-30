#include "VanityMasteryResult.h"

FVanityMasteryResult::FVanityMasteryResult() {
    this->FashionitesRewarded = 0;
    this->Previous = FVanityMasterySave();
    this->Current = FVanityMasterySave();
}

