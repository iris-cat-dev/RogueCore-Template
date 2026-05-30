#include "ElementComponent.h"
#include "Net/UnrealNetwork.h"

UElementComponent::UElementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->HasResistanceWhenInvulnerable = false;
    this->ResistanceWhenInvulnerable = 0.00f;
    this->RadiationBoilSizeMultiplier = 1.00f;
    this->CachedPawnStatComponent = nullptr;
    this->CachedStatusEffectsComponent = nullptr;
}

float UElementComponent::TrySetElementValueToMax(UElementType* ElementType, AActor* InSource, bool MarkReplicateDirty) {
    return 0.0f;
}

bool UElementComponent::TryPushElementSource(UElementType* ElementType, AActor* Target, float Value, EElementSourceIntensity Intensity) {
    return false;
}

bool UElementComponent::TryPopElementSource(UElementType* ElementType, AActor* Target, float Value, EElementSourceIntensity Intensity) {
    return false;
}

void UElementComponent::SetServerUserDataBool(UElementType* InElement, const bool InBool) {
}

void UElementComponent::ResetElementValue(UElementType* ElementType) {
}

void UElementComponent::RemoveElementEventIfActive(UElementEventType* InEventType) {
}

void UElementComponent::PushElementEvent(UElementEventType* InEventType, UElementType* InTriggerByElement, AActor* InSource) {
}

void UElementComponent::OnRep_Events(TArray<FElementEventState> PrevEvents) {
}

void UElementComponent::OnOwnerDeath(UHealthComponent* HealthComponent, float damageAmount, const FDamageData& DamageData, const TArray<UDamageTag*>& Tags) {
}

bool UElementComponent::IsEventActive(UElementEventType* ElementEventType) const {
    return false;
}

bool UElementComponent::IsElementSupported(UElementType* InElement) const {
    return false;
}

void UElementComponent::IsElementActiveOnTarget(AActor* Target, UElementEventType* EventType, bool& OutResult) {
}

TArray<UElementType*> UElementComponent::GetSupportedElements() const {
    return TArray<UElementType*>();
}

bool UElementComponent::GetServerUserDataBool(UElementType* InElement) const {
    return false;
}

TArray<UElementType*> UElementComponent::GetRelatedElementTypes(const FElementEventState& InEventState) const {
    return TArray<UElementType*>();
}

float UElementComponent::GetElementValueEffect(UElementType* ElementType) const {
    return 0.0f;
}

UElementStateDelegates* UElementComponent::GetElementStateDelegates(UElementType* ElementType) {
    return NULL;
}

float UElementComponent::GetElementLocalChangeDelta(UElementType* ElementType) const {
    return 0.0f;
}

void UElementComponent::GetElementEventStatesForType(UElementType* ElementType, TArray<FElementEventState>& OutStates) const {
}

UElementEventComponent* UElementComponent::GetElementEventComponent(UElementEventType* InElementType) const {
    return NULL;
}

float UElementComponent::GetCurrentElementValue(UElementType* ElementType) const {
    return 0.0f;
}

float UElementComponent::ChangeElementValue(UElementType* ElementType, float ChangeValue, const FElementChangeArgs& InArgs, bool MarkReplicateDirty) {
    return 0.0f;
}

bool UElementComponent::AreAnyEventsActiveForElement(UElementType* ElementType) const {
    return false;
}

void UElementComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UElementComponent, ElementStates);
    DOREPLIFETIME(UElementComponent, Events);
}


