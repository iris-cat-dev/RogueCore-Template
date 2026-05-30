#include "BioBoosterTerminal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
#include "Components/WidgetComponent.h"
#include "BioBoosterTerminalUsable.h"
#include "HackingUsableComponent.h"

ABioBoosterTerminal::ABioBoosterTerminal(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
    this->RewardCount = 2;
    this->SelectionMode = EBioBoosterSelectionMode::AllFromAllDecks;
    this->SkeletalMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMeshComponent"));
    this->HackTerminalUsable = CreateDefaultSubobject<UHackingUsableComponent>(TEXT("HackTerminalUsable"));
    this->PlayerInterfaceUsable = CreateDefaultSubobject<UBioBoosterTerminalUsable>(TEXT("PlayerInterfaceUsable"));
    this->PlayerInterfaceWidget = CreateDefaultSubobject<UWidgetComponent>(TEXT("PlayerInterfaceComponent"));
    this->SelectorWidget = nullptr;
    this->PlayerInterfaceWidget->SetupAttachment(SkeletalMeshComponent);
    this->SkeletalMeshComponent->SetupAttachment(RootComponent);
}


void ABioBoosterTerminal::OnPlayerInterfaceVisibilityChanged(ESlateVisibility InVisibility) {
}

void ABioBoosterTerminal::OnPlayerInterfaceUsed(APlayerCharacter* InPlayer) {
}

void ABioBoosterTerminal::OnPlayerInterfaceUnhovered(APlayerCharacter* InPlayer, UUsableComponentBase* usable) {
}

void ABioBoosterTerminal::OnPlayerInterfaceProgress(float InProgress) {
}

void ABioBoosterTerminal::OnPlayerInterfaceHovered(APlayerCharacter* InPlayer, UUsableComponentBase* usable) {
}

void ABioBoosterTerminal::OnActivateTerminalUsed(APlayerCharacter* InPlayer) {
}

bool ABioBoosterTerminal::GetIsInterfaceVisible() const {
    return false;
}


