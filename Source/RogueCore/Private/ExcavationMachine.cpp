#include "ExcavationMachine.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "Net/UnrealNetwork.h"

AExcavationMachine::AExcavationMachine(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootScene"));
    this->GemSpawnPoint = CreateDefaultSubobject<USceneComponent>(TEXT("GemSpawnPoint"));
    this->RootScene = (USceneComponent*)RootComponent;
    this->SpawnChanceExpenite = 0.10f;
    this->PostSpawnChanceExpenite = 0.05f;
    this->SpawnChanceMultiplierExpenite = 1.03f;
    this->ResourceAmountExpenite = 0.03f;
    this->Seed = -1;
    this->RemainingGemCount = 0;
    this->VisualsEnabled = false;
    this->GemSpawnPoint->SetupAttachment(RootComponent);
}

void AExcavationMachine::UpdateFutureRewards(int32 InDepth) {
}

void AExcavationMachine::SpawnExcavationReward() {
}

void AExcavationMachine::SetVisualsEnabled(bool InEnabled) {
}

void AExcavationMachine::SetRemainingGemCount(int32 InGemAmount) {
}

void AExcavationMachine::SetExpenitePayout(float InPayout) {
}




void AExcavationMachine::OnRep_VisualsEnabled() {
}

void AExcavationMachine::OnRep_Seed() {
}

void AExcavationMachine::OnRep_RemainingGemCount() {
}

void AExcavationMachine::OnRep_PredictedRewards() {
}

void AExcavationMachine::LastRewardDispensed_AttachmentChanged(bool Attached, FVector PrevScale) {
}

void AExcavationMachine::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AExcavationMachine, Seed);
    DOREPLIFETIME(AExcavationMachine, RemainingGemCount);
    DOREPLIFETIME(AExcavationMachine, PredictedRewards);
    DOREPLIFETIME(AExcavationMachine, VisualsEnabled);
}


