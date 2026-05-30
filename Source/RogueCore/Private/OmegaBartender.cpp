#include "OmegaBartender.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "Net/UnrealNetwork.h"

AOmegaBartender::AOmegaBartender(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->PlayerCostMultiplier = 1.00f;
    this->EmptySlot.AddDefaulted(4);
    this->CurrentOrder = nullptr;
    this->SpecialOrder = nullptr;
    this->CurrentIdleMontageIndex = -1;
    this->CurrentPourMontageIndex = -1;
    this->DrinkAmount = -1;
    this->BartenderAnimationState = EBartenderAnim::None;
    this->OmegaSalute = nullptr;
    this->SaluteLoseTime = 0.00f;
    this->SaluteCooldown = 0.00f;
    this->SalutesToMakeOmegaSalute = 1;
    this->CaloriesPerToken = 1;
    this->QuestAccepted = false;
}

void AOmegaBartender::ValidCheckPlayersInside() {
}

void AOmegaBartender::TryAndOrder(bool CanTriggerEvent) {
}



void AOmegaBartender::SpawnMugInHand(int32 Index, USceneComponent* Parent) {
}

void AOmegaBartender::SetSpecialOrder(UDrinkableDataAsset* Order) {
}

void AOmegaBartender::SetNextOrder(UDrinkableDataAsset* Drink, bool IgnoreCheck, bool OnlySet) {
}

void AOmegaBartender::SetMug(ADrinkableActor* Mug, int32 Index) {
}

void AOmegaBartender::Server_PlayerSaluted_Implementation() {
}

void AOmegaBartender::Server_MugTaken_Implementation(ADrinkableActor* Mug) {
}

void AOmegaBartender::RemovePlayerInside(APlayerCharacter* Player) {
}







void AOmegaBartender::PlaceOrder() {
}

void AOmegaBartender::PickNewIdle() {
}

void AOmegaBartender::OnRep_Mugs() {
}

void AOmegaBartender::OnRep_GymCurrencyData() {
}

void AOmegaBartender::OnRep_GymCurrencyAmount() {
}

void AOmegaBartender::OnRep_BeerOrdered() {
}

void AOmegaBartender::OnRep_BartenderAnimationState() {
}

void AOmegaBartender::NotifyDetachMug(FName NotifyName, int32 Index) {
}

void AOmegaBartender::MugTaken(ADrinkableActor* Mug) {
}

bool AOmegaBartender::IsQuestAccepted() const {
    return false;
}

bool AOmegaBartender::HasCollectiveResource(UResourceData* ResourceData) {
    return false;
}

float AOmegaBartender::GetPlayerCostMultiplier() const {
    return 0.0f;
}

UAnimMontage* AOmegaBartender::GetIdleMontage(int32 Index) {
    return NULL;
}

UAnimMontage* AOmegaBartender::GetIdleArmMontage(int32 MontageIndex, int32 ArmIndex) {
    return NULL;
}

TArray<bool> AOmegaBartender::GetEmptySlots() {
    return TArray<bool>();
}

int32 AOmegaBartender::GetCaloriesPerToken() {
    return 0;
}

void AOmegaBartender::Client_DetachMug_Implementation(int32 Index, const FTransform& Transform) {
}

void AOmegaBartender::ChangeBartenderAnimState(EBartenderAnim State) {
}


void AOmegaBartender::CancelQuest() {
}

void AOmegaBartender::All_MugFilled_Implementation(int32 Index) {
}

void AOmegaBartender::All_ChangeMugSlot_Implementation(int32 Index, bool Empty) {
}

void AOmegaBartender::AddPlayerInside(APlayerCharacter* Player) {
}


void AOmegaBartender::AcceptQuest(UDrinkableDataAsset* QuestDrink) {
}

void AOmegaBartender::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AOmegaBartender, GymCurrencyAmount);
    DOREPLIFETIME(AOmegaBartender, GymCurrencyData);
    DOREPLIFETIME(AOmegaBartender, Mugs);
    DOREPLIFETIME(AOmegaBartender, EmptySlot);
    DOREPLIFETIME(AOmegaBartender, CurrentIdleMontageIndex);
    DOREPLIFETIME(AOmegaBartender, CurrentPourMontageIndex);
    DOREPLIFETIME(AOmegaBartender, DrinkAmount);
    DOREPLIFETIME(AOmegaBartender, BartenderAnimationState);
    DOREPLIFETIME(AOmegaBartender, QuestAccepted);
}


