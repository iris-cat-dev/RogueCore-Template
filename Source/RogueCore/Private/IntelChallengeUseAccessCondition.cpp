#include "IntelChallengeUseAccessCondition.h"

UIntelChallengeUseAccessCondition::UIntelChallengeUseAccessCondition() {
    this->RequiredAccess = nullptr;
    this->RequiredUseAmount = 1;
}

void UIntelChallengeUseAccessCondition::OnUsableTriggered(UUsableComponentBase* usable) {
}


