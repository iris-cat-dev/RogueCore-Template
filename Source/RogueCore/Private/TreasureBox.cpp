#include "TreasureBox.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
#include "Net/UnrealNetwork.h"
#include "RepairableComponent.h"
#include "RepairableUsable.h"
#include "SingleUsableComponent.h"
#include "TerrainPlacementComponent.h"

ATreasureBox::ATreasureBox(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Repairable = CreateDefaultSubobject<URepairableComponent>(TEXT("Repairable"));
    this->RepairUsable = CreateDefaultSubobject<URepairableUsable>(TEXT("RepairUsable"));
    this->HammeringUsable = CreateDefaultSubobject<USingleUsableComponent>(TEXT("HammeringUsable"));
    this->terrainPlacement = CreateDefaultSubobject<UTerrainPlacementComponent>(TEXT("terrainPlacement"));
    this->MiddlePlane = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MiddlePlane"));
    this->BoxMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("BoxMesh"));
    this->CollectActivationDelay = 5.00f;
    this->OpenBoxAnim = nullptr;
    this->DelayToOpenAfterRepair = 2.00f;
    this->ResourceClass = nullptr;
    this->boxRewarder = nullptr;
    this->HologramRotationSpeed = 10.00f;
    this->ItemsInserted = 0;
    this->IsTreasureAvailable = false;
    this->BoxMesh->SetupAttachment(RootComponent);
    this->MiddlePlane->SetupAttachment(RootComponent);
}

void ATreasureBox::PlaceResources(AProceduralSetup* setup, float Radius, UDebrisPositioning* DebrisPositioning, const TArray<FVector>& LocationsToAvoid, UCurveFloat* AvoidCostCurve) {
}

void ATreasureBox::OnUsedEvent(APlayerCharacter* User, EInputKeys Key) {
}

void ATreasureBox::OnRepairedEvent(URepairableComponent* repaired) {
}

void ATreasureBox::OnHammerProgress(float Progress) {
}

void ATreasureBox::OnHammered(APlayerCharacter* User, EInputKeys Key) {
}

void ATreasureBox::OnFullyRepairedEvent(URepairableComponent* repaired) {
}

void ATreasureBox::OnAllResourcesCollectedEvent(URepairableComponent* repaired) {
}


void ATreasureBox::AfterRepairDelay() {
}

void ATreasureBox::ActivateCollection() {
}

void ATreasureBox::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ATreasureBox, ItemsInserted);
    DOREPLIFETIME(ATreasureBox, IsTreasureAvailable);
}


