#include "NeutralizeEnemiesObjective.h"
#include "Net/UnrealNetwork.h"

UNeutralizeEnemiesObjective::UNeutralizeEnemiesObjective(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TargetCount = -1;
    this->KilledCount = 0;
}



void UNeutralizeEnemiesObjective::NotifiedKilledCountChanged() {
}

int32 UNeutralizeEnemiesObjective::GetTargetCount() const {
    return 0;
}

int32 UNeutralizeEnemiesObjective::GetMissingCount() const {
    return 0;
}

int32 UNeutralizeEnemiesObjective::GetKilledCount() const {
    return 0;
}

int32 UNeutralizeEnemiesObjective::FindTargetCountForLevel_Implementation() const {
    return 0;
}

void UNeutralizeEnemiesObjective::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UNeutralizeEnemiesObjective, TargetCount);
    DOREPLIFETIME(UNeutralizeEnemiesObjective, KilledCount);
}


