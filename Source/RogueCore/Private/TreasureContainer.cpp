#include "TreasureContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "Net/UnrealNetwork.h"
#include "OncePerPlayerInstantUsableComponent.h"

ATreasureContainer::ATreasureContainer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Root = (USceneComponent*)RootComponent;
    this->CollectUsable = CreateDefaultSubobject<UOncePerPlayerInstantUsableComponent>(TEXT("CollectUsable"));
    this->AquisitionSource = nullptr;
    this->LastJoiner = nullptr;
    this->OpenedStat = nullptr;
    this->TreasureRewarder = nullptr;
    this->ShouldActivateCollectUsable = true;
    this->PreventLatejoiners = false;
}

void ATreasureContainer::TestAwardTreasure() {
}

void ATreasureContainer::SetPreventFurtherLatejoiners(bool prevent) {
}

void ATreasureContainer::SetCanCollectTreasure(bool canCollect) {
}

void ATreasureContainer::OnRep_LastJoiner() {
}

void ATreasureContainer::OnRep_Collectors() {
}

void ATreasureContainer::OnPlayerLatejoined(APlayerCharacter* joiner) {
}

void ATreasureContainer::OnPlayerCollectedTreasure(APlayerCharacter* collector, EInputKeys Key) {
}




bool ATreasureContainer::GetPreventFurtherLatejoiners() const {
    return false;
}

void ATreasureContainer::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ATreasureContainer, Collectors);
    DOREPLIFETIME(ATreasureContainer, LastJoiner);
}


