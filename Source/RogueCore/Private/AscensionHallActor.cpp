#include "AscensionHallActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
#include "Net/UnrealNetwork.h"

AAscensionHallActor::AAscensionHallActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->MachineMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("MachineMeshComponent"));
    this->State = EAscensionHallState::NoDwarfHasEntered;
    this->TP_AscensionMontage_Start = nullptr;
    this->TP_AscensionMontage_Loop = nullptr;
    this->TP_AscensionMontage_End = nullptr;
    this->TransformInterpSpeed = 2.00f;
    this->PickaxeZOffset = -10.00f;
    this->PickaxeScale = 2.00f;
    this->SetCameraMode = ECharacterCameraMode::ThirdPerson;
    this->KneelingChangesToThirdPerson = false;
    this->RewardsWidgetClass = nullptr;
    this->AscensionPickaxeClass = nullptr;
    this->PickaxeSocketName = TEXT("Dwarf_HandR_Pickaxe");
    this->MachineMeshComponent->SetupAttachment(RootComponent);
}

void AAscensionHallActor::ToggleKneelPlayer(APlayerCharacter* InPlayer, USceneComponent* InPlacement) {
}

void AAscensionHallActor::StopKneeling(APlayerCharacter* InPlayer) {
}

void AAscensionHallActor::StartAscension() {
}

void AAscensionHallActor::SetAscendingCharacter(APlayerCharacter* InCharacter) {
}






void AAscensionHallActor::PressingMovementInputKeyChanged(APlayerCharacter* InPlayer, bool HasInput) {
}

void AAscensionHallActor::OnRep_State(const EAscensionHallState& InPrevState) {
}

void AAscensionHallActor::OnRep_PlayerInterpolations(const TArray<FPlayerTransformInterp>& LastInterps) {
}

void AAscensionHallActor::OnRep_KneelingPlayers(const TArray<FKneelingPlayerData>& PrevKneelingPlayers) {
}

void AAscensionHallActor::OnRep_AscensionPickaxe() {
}

void AAscensionHallActor::OnRep_AscendingCharacter(const TWeakObjectPtr<APlayerCharacter>& prevCharacter) {
}

void AAscensionHallActor::OnCharacterMontageEnded(UAnimMontage* Montage, bool bInterrupted) {
}

void AAscensionHallActor::OnCharacterMontageBlendingOut(UAnimMontage* Montage, bool bInterrupted) {
}

void AAscensionHallActor::JumpPressed(APlayerCharacter* InPlayer) {
}

bool AAscensionHallActor::IsAscensionInProgress() const {
    return false;
}

EAscensionHallState AAscensionHallActor::GetState() const {
    return EAscensionHallState::NoDwarfHasEntered;
}

USceneComponent* AAscensionHallActor::GetCharacterPlacementComponent_Implementation() const {
    return NULL;
}

APlayerCharacter* AAscensionHallActor::GetAscendingCharacter() const {
    return NULL;
}

void AAscensionHallActor::EndAscension() {
}

void AAscensionHallActor::ChangeState(EAscensionHallState InNewState) {
}

void AAscensionHallActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AAscensionHallActor, State);
    DOREPLIFETIME(AAscensionHallActor, AscendingCharacter);
    DOREPLIFETIME(AAscensionHallActor, KneelingPlayers);
    DOREPLIFETIME(AAscensionHallActor, PlayerInterpolations);
    DOREPLIFETIME(AAscensionHallActor, AscensionPickaxe);
}


