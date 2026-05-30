#include "IntelChallengeForBossSummon.h"

UIntelChallengeForBossSummon::UIntelChallengeForBossSummon() {
    this->RequiredSummonAmount = 1;
    this->RequiredRunDepth = ERunDepth::None;
}

void UIntelChallengeForBossSummon::OnBossSummoned(AActor* Boss) {
}


