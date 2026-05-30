#include "SonarScanUnlockComponent.h"
#include "Net/UnrealNetwork.h"

USonarScanUnlockComponent::USonarScanUnlockComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PostOpacityCurve = nullptr;
    this->DistanceOfScanWedge = 3700.00f;
    this->AngleOfScanWedge = 90.00f;
    this->ScanDelay = 0.50f;
    this->OutlineStatusEffect = nullptr;
}

void USonarScanUnlockComponent::SetRadarWidget(UHUDRadarWidget* InRadarWidget) {
}

void USonarScanUnlockComponent::Server_HandleScanObjects_Implementation(const FScanObjects& InScanObjects) {
}

void USonarScanUnlockComponent::OnRep_EnabledPointOfInterestOutlines(const TArray<TWeakObjectPtr<UOutlineComponent>>& InPrevComponents) {
}

void USonarScanUnlockComponent::DisablePointOfInterestOutlines() {
}

void USonarScanUnlockComponent::All_SpawnSoundAtOwner_Implementation(USoundBase* InSound) const {
}

void USonarScanUnlockComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USonarScanUnlockComponent, EnabledPointOfInterestOutlines);
}


