#include "DataTerminal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "Components/WidgetComponent.h"
#include "Net/UnrealNetwork.h"
#include "SingleUsableComponent.h"

ADataTerminal::ADataTerminal(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->HasBeenActivated = false;
    this->MinBaseTextLength = 2;
    this->MaxBaseTextLength = 3;
    this->MinNumberTextLength = 2;
    this->MinBaseTextVariations = 1;
    this->MaxBaseTextVariations = 3;
    this->AnimationSettings = nullptr;
    this->UseDuration = 2.00f;
    this->MatchCountRequirement = 4;
    this->Root = (USceneComponent*)RootComponent;
    this->BoxColliderContainer = CreateDefaultSubobject<USceneComponent>(TEXT("BoxColliderContainer"));
    this->SingleUsable = CreateDefaultSubobject<USingleUsableComponent>(TEXT("SingleUsable"));
    this->WidgetComponent = CreateDefaultSubobject<UWidgetComponent>(TEXT("WidgetComponent"));
    this->RandomSeed = 0;
    this->BoxColliderContainer->SetupAttachment(RootComponent);
    this->WidgetComponent->SetupAttachment(RootComponent);
}

void ADataTerminal::Server_ActivateTerminal_Implementation() {
}

void ADataTerminal::OnUnhoveredUsable(APlayerCharacter* Character, UUsableComponentBase* usable) {
}

void ADataTerminal::OnRep_RandomSeed() {
}

void ADataTerminal::OnRep_HasBeenActivated() {
}

void ADataTerminal::OnRep_ActiveBoxes(TArray<int32> PrevBoxes) {
}

void ADataTerminal::OnHoveredUsable(APlayerCharacter* Character, UUsableComponentBase* usable) {
}

void ADataTerminal::OnCharacterUsed(APlayerCharacter* User, EInputKeys Key) {
}

void ADataTerminal::OnBoxUsed(APlayerCharacter* User, EInputKeys Key, UUsableComponentBase* UsableComponent) {
}

void ADataTerminal::OnBoxEndUse(UUsableComponentBase* usable) {
}

void ADataTerminal::OnBoxBeginUse(APlayerCharacter* User, EInputKeys Key, UUsableComponentBase* UsableComponent) {
}

void ADataTerminal::Cheat_Activate() {
}

void ADataTerminal::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ADataTerminal, HasBeenActivated);
    DOREPLIFETIME(ADataTerminal, ActiveBoxes);
    DOREPLIFETIME(ADataTerminal, RandomSeed);
}


