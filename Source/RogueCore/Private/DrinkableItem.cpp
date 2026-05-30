#include "DrinkableItem.h"
#include "Net/UnrealNetwork.h"

ADrinkableItem::ADrinkableItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DrinkableData = nullptr;
    this->Filled = true;
    this->OverrideThrowAngle = false;
}

void ADrinkableItem::SetThrowAngleOverride(FVector Override) {
}

void ADrinkableItem::SetOverrideThrowAngle(bool Override) {
}

void ADrinkableItem::SetFilled(bool aFilled) {
}

void ADrinkableItem::OnRep_DrinkableData() {
}

FVector ADrinkableItem::GetOverridenThrowingAngle() const {
    return FVector{};
}

bool ADrinkableItem::GetIsThrowAngleOverriden() const {
    return false;
}

void ADrinkableItem::Consume() {
}

void ADrinkableItem::ClientConsumed_Implementation() {
}


void ADrinkableItem::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ADrinkableItem, DrinkableData);
}


