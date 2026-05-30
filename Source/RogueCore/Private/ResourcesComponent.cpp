#include "ResourcesComponent.h"
#include "Net/UnrealNetwork.h"

UResourcesComponent::UResourcesComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ResourceCap = -1.00f;
}

void UResourcesComponent::ResourceIncreased(UCappedResource* Resource, float Delta) {
}

void UResourcesComponent::ResourceFull(UCappedResource* Resource) {
}

void UResourcesComponent::ResourceChanged(UCappedResource* Resource, float CurrentAmount) {
}

void UResourcesComponent::RemoveAllResources() {
}

void UResourcesComponent::OnRep_Resources() {
}

int32 UResourcesComponent::GetXPFromResourceMap(const TMap<UResourceData*, float>& NewResources) {
    return 0;
}

int32 UResourcesComponent::GetXpFromMining() const {
    return 0;
}

TMap<UResourceData*, float> UResourcesComponent::GetSeparateResourcesFromMap(const TMap<UResourceData*, float>& NewResources) {
    return TMap<UResourceData*, float>();
}

float UResourcesComponent::GetResourceAmount(const UResourceData* InData) const {
    return 0.0f;
}

UCappedResource* UResourcesComponent::GetResource(UResourceData* Data, bool createIfAmountIsZero) {
    return NULL;
}

float UResourcesComponent::GetCapacityPct() const {
    return 0.0f;
}

TArray<UCappedResource*> UResourcesComponent::GetAllResources() const {
    return TArray<UCappedResource*>();
}

float UResourcesComponent::AddResource(UResourceData* InData, float Amount) {
    return 0.0f;
}

void UResourcesComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UResourcesComponent, Resources);
}


