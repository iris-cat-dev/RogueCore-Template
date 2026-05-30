#include "HardRockBreakingInstallationActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
#include "Components/SphereComponent.h"
#include "Components/WidgetComponent.h"
#include "Net/UnrealNetwork.h"
#include "OutlineComponent.h"
#include "PathfinderCollisionComponent.h"
#include "SimpleObjectInfoComponent.h"
#include "SingleUsableComponent.h"
#include "SpawnActorWithDebrisPosComponent.h"
#include "TerrainPlacementComponent.h"

AHardRockBreakingInstallationActor::AHardRockBreakingInstallationActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Root = (USceneComponent*)RootComponent;
    this->terrainPlacement = CreateDefaultSubobject<UTerrainPlacementComponent>(TEXT("terrainPlacement"));
    this->TerminalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("TerminalMesh"));
    this->TerminalDisplayWidget = CreateDefaultSubobject<UWidgetComponent>(TEXT("DisplayWidget"));
    this->TerminalUsableCollider = CreateDefaultSubobject<USphereComponent>(TEXT("TerminalUsableCollider"));
    this->ExpeniteSpawnPoint = CreateDefaultSubobject<USceneComponent>(TEXT("ExpeniteSpawnPoint"));
    this->PathfinderCollision = CreateDefaultSubobject<UPathfinderCollisionComponent>(TEXT("PathfinderCollision"));
    this->SpawnActorWithDebrisPosition = CreateDefaultSubobject<USpawnActorWithDebrisPosComponent>(TEXT("SpawnActorWithDebrisPosition"));
    this->Outline = CreateDefaultSubobject<UOutlineComponent>(TEXT("Outline"));
    this->SimpleObjectInfo = CreateDefaultSubobject<USimpleObjectInfoComponent>(TEXT("SimpleObjectInfo"));
    this->ScanTerminalUsable = CreateDefaultSubobject<USingleUsableComponent>(TEXT("ScanTerminalUsable"));
    this->BootTerminalUsable = CreateDefaultSubobject<USingleUsableComponent>(TEXT("BootTerminalUsable"));
    this->CoreCrusherPart = nullptr;
    this->CoreCrusherPartPositioning = nullptr;
    this->CoreCrusherPartCostCurve = nullptr;
    this->DefenceEvent = nullptr;
    this->ExpeniteChunkSize = 3.00f;
    this->ExpeniteChunkAmount = 50;
    this->PartsSpawnRange = 600.00f;
    this->TimePerCoreCrusher = 120.00f;
    this->Progress = 0.00f;
    this->WorkingCoreCrushers = 0;
    this->MissingMachineParts = 2;
    this->bHasRunInitialActivation = false;
    this->bHasScannedForMissingParts = false;
    this->ExpeniteSpawnPoint->SetupAttachment(RootComponent);
    this->PathfinderCollision->SetupAttachment(RootComponent);
    this->TerminalDisplayWidget->SetupAttachment(TerminalMesh);
    this->TerminalMesh->SetupAttachment(RootComponent);
    this->TerminalUsableCollider->SetupAttachment(TerminalMesh);
    this->terrainPlacement->SetupAttachment(RootComponent);
}

void AHardRockBreakingInstallationActor::OnUseTerminalScan(APlayerCharacter* User, EInputKeys Key) {
}

void AHardRockBreakingInstallationActor::OnUseTerminalBoot(APlayerCharacter* User, EInputKeys Key) {
}

void AHardRockBreakingInstallationActor::OnRep_Progress() {
}

void AHardRockBreakingInstallationActor::OnRep_MissingMachineParts() {
}

void AHardRockBreakingInstallationActor::OnRep_bHasScannedForMissingParts() {
}

void AHardRockBreakingInstallationActor::OnInitialGenerationDone() {
}


void AHardRockBreakingInstallationActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AHardRockBreakingInstallationActor, Progress);
    DOREPLIFETIME(AHardRockBreakingInstallationActor, MissingMachineParts);
    DOREPLIFETIME(AHardRockBreakingInstallationActor, CoreCrusherPartScannerMeshes);
    DOREPLIFETIME(AHardRockBreakingInstallationActor, bHasScannedForMissingParts);
}


