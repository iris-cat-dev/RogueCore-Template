#include "CustomizerComponent.h"
#include "Net/UnrealNetwork.h"

UCustomizerComponent::UCustomizerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultCustomizationAsset = nullptr;
    this->OptionReplicatedFromHost = false;
    this->EnableDangerousSaveGameIDEditing = false;
}

void UCustomizerComponent::OnRep_HostCustomizationGuid() {
}

FGuid UCustomizerComponent::GetSaveGameID() const {
    return FGuid{};
}

TArray<UCustomizationDataAsset*> UCustomizerComponent::GetCompatibleCustomizations() const {
    return TArray<UCustomizationDataAsset*>();
}

void UCustomizerComponent::ApplyCustomizationAsync(UCustomizationDataAsset* CustomizationData, bool IsChangedLocally) {
}

void UCustomizerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UCustomizerComponent, HostCustomizationGuid);
}


