#include "SpaceRigBar.h"
#include "Components/BoxComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "InstantUsable.h"
#include "Net/UnrealNetwork.h"

ASpaceRigBar::ASpaceRigBar(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root Component"));
    this->BarUsable = CreateDefaultSubobject<UInstantUsable>(TEXT("BarUsable"));
    this->BarUsableCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("BarUsableColiider"));
    this->BarMenuWidget = nullptr;
    this->DrinkServingLocations.AddDefaulted(4);
    this->DrinkableSpecial = nullptr;
    this->BarUsableCollider->SetupAttachment(RootComponent);
}

void ASpaceRigBar::SpawnDrinkables(UDrinkableDataAsset* drinkable, APlayerCharacter* User) {
}

void ASpaceRigBar::SetVisibilityOfHolidayMeshes() {
}




float ASpaceRigBar::PlayNegativeAnim_Implementation() {
    return 0.0f;
}


void ASpaceRigBar::PayTip(APlayerCharacter* Character, int32 credits) {
}

void ASpaceRigBar::OnRep_DrinkableSpecial() {
}

bool ASpaceRigBar::HasUnclaimedDrinkables() const {
    return false;
}

bool ASpaceRigBar::HasSpaceForMoreDrinkables() const {
    return false;
}

int32 ASpaceRigBar::GetAvailableDrinkableSlots() const {
    return 0;
}

void ASpaceRigBar::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASpaceRigBar, DrinkableSpecial);
}


