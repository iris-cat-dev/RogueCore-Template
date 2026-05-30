#include "BXEUnlockBase.h"

UBXEUnlockBase::UBXEUnlockBase() {
    this->UnlockUsesRandomRarity = false;
    this->ShoutNegotiationSelected = nullptr;
    this->DefaultRarity = nullptr;
    this->VisualSettingsOverride = nullptr;
    this->AttributeCollection = nullptr;
    this->AdditionalAttributeAmount = 0;
    this->UnlockType = EUnlockType::Upgrade;
    this->LogicStatus = EProductionStatus::Prototype;
    this->ParticleStatus = EProductionStatus::Unknown;
    this->SoundStatus = EProductionStatus::Unknown;
}

UUnlockVisualSettings* UBXEUnlockBase::GetVisualSettings(UBXEUnlockRarity* InRarity) const {
    return NULL;
}

EUnlockType UBXEUnlockBase::GetUnlockType() const {
    return EUnlockType::None;
}

FText UBXEUnlockBase::GetTitle() const {
    return FText::GetEmpty();
}

TArray<UWeaponTagBase*> UBXEUnlockBase::GetRelatedWeaponTags() const {
    return TArray<UWeaponTagBase*>();
}

TSoftObjectPtr<UTexture2D> UBXEUnlockBase::GetIcon() const {
    return NULL;
}

FText UBXEUnlockBase::GetFunctionalDescription() const {
    return FText::GetEmpty();
}

FText UBXEUnlockBase::GetDescription() const {
    return FText::GetEmpty();
}

UBXEUnlockAttributeWeightPool* UBXEUnlockBase::GetAttributeCollection() {
    return NULL;
}


