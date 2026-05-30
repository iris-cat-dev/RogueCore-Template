#include "PickaxePreviewActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "Net/UnrealNetwork.h"

APickaxePreviewActor::APickaxePreviewActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->TP_Root = CreateDefaultSubobject<USceneComponent>(TEXT("TP_RootComponent"));
    this->characterID = nullptr;
    this->EquippedMaterial = nullptr;
    this->TP_Root->SetupAttachment(RootComponent);
}

void APickaxePreviewActor::Server_SetEquippedPickaxeParts_Implementation(const FEquippedPickaxeParts& InParts) {
}

void APickaxePreviewActor::PreviewParts(EPickaxePartLocation PreviewLocation, UPickaxePart* PreviewPart) {
}

void APickaxePreviewActor::OnRep_EquippedPickaxeParts() {
}

void APickaxePreviewActor::EquipParts() {
}

void APickaxePreviewActor::Client_EquipParts_Implementation(UPlayerCharacterID* InCharacterID) {
}

void APickaxePreviewActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APickaxePreviewActor, EquippedPickaxeParts);
}


