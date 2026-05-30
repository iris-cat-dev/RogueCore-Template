#include "RivalBombNode.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "HackingUsableComponent.h"
#include "Net/UnrealNetwork.h"

ARivalBombNode::ARivalBombNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultRootComponent"));
    this->RivalBombCable = nullptr;
    this->HackingUsable = CreateDefaultSubobject<UHackingUsableComponent>(TEXT("HackingUsable"));
    this->State = ERivalBombNodeState::Inactive;
    this->BombCable = nullptr;
    this->RivalBomb = nullptr;
    this->RemainingHackTime = -1.00f;
    this->HackStartTime = 0.00f;
    this->BombIndex = -1;
}


void ARivalBombNode::OnRep_State() {
}

void ARivalBombNode::OnRep_RemainingHackTime() const {
}

void ARivalBombNode::OnNodeHackedByUser(APlayerCharacter* Player) {
}

void ARivalBombNode::OnHackTimerTick() {
}

float ARivalBombNode::GetRemainingTimePct() const {
    return 0.0f;
}

void ARivalBombNode::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ARivalBombNode, State);
    DOREPLIFETIME(ARivalBombNode, RivalBomb);
    DOREPLIFETIME(ARivalBombNode, RemainingHackTime);
    DOREPLIFETIME(ARivalBombNode, HackStartTime);
    DOREPLIFETIME(ARivalBombNode, BombIndex);
}


