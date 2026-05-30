#include "WeakpointGlowComponent.h"

UWeakpointGlowComponent::UWeakpointGlowComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EmissiveParam = TEXT("Dynamic Emissive Multiplier");
    this->CurveMultiplier = 1.00f;
    this->Mode = EWeakpointGlowMode::Set;
    this->WeakPointMaterial = nullptr;
    this->AddFirstChannelAutomatically = true;
    this->ReplaceMatIndex = 0;
}

bool UWeakpointGlowComponent::StopLoopingGlow(int32 aGlowID, bool aFade) {
    return false;
}

void UWeakpointGlowComponent::ShowBodypartHit(float Amount, float BaseAmount, const FDamageData& DamageData) {
}

void UWeakpointGlowComponent::SetUpWeakPointGlowOnMeshByBone(const USkeletalMeshComponent* mesh, int32 MaterialIndex, FName bone, UHealthComponentBase* HealthComponent) {
}

int32 UWeakpointGlowComponent::SetUpWeakPointGlowOnMesh(UMeshComponent* mesh, int32 MaterialIndex, UFSDPhysicalMaterial* PhysicalMaterial, UHealthComponentBase* HealthComponent) {
    return 0;
}

void UWeakpointGlowComponent::SetChannelEnabled(bool Enabled, int32 Channel) {
}

void UWeakpointGlowComponent::EnableWeakpointRegistration(bool Enabled) {
}

void UWeakpointGlowComponent::All_ShowWeakPointHit_Implementation(uint8 Channel) {
}

void UWeakpointGlowComponent::AddWeakpointGlow(bool loopIndefinitely, float LoopTime, UCurveFloat* GrowCurve, UCurveFloat* FadeCurve, int32 UniqueID, int32 Channel) {
}


