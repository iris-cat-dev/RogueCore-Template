#include "TerrainScannerStaticMesh.h"

UTerrainScannerStaticMesh::UTerrainScannerStaticMesh(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CastShadow = false;
    this->bVisibleInSceneCaptureOnly = true;
    this->CanCharacterStepUpOn = ECB_No;
    this->bVisibleAtBeginPlay = true;
    this->bHideOnDeath = true;
    this->bUseFogOfWar = true;
    this->bIsRevealedByDataTerminal = false;
    this->bVisibleOnScanner = false;
}

void UTerrainScannerStaticMesh::SetVisibleOnScanner(bool InShowOnScanner) {
}

void UTerrainScannerStaticMesh::SetUseFogOfWar(bool InUseFogOfWar) {
}

void UTerrainScannerStaticMesh::RegisterWithSubsystem() {
}

void UTerrainScannerStaticMesh::OnOwnerDeath(UHealthComponentBase* InHealthComponent) {
}

void UTerrainScannerStaticMesh::Initialize() {
}


