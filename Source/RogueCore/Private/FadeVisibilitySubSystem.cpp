#include "FadeVisibilitySubSystem.h"

UFadeVisibilitySubSystem::UFadeVisibilitySubSystem() {
}

void UFadeVisibilitySubSystem::ScalePrimitive(const UPrimitiveComponent* Component, FVector StartScale, FVector EndScale, float duration) {
}

void UFadeVisibilitySubSystem::ScaleOutPrimitive(const UPrimitiveComponent* Component, float duration) {
}

void UFadeVisibilitySubSystem::ScaleInPrimitive(const UPrimitiveComponent* Component, float duration) {
}

void UFadeVisibilitySubSystem::FadeOutMaterialByName(const UMeshComponent* Component, FName Name, FName ParameterName, float duration) {
}

void UFadeVisibilitySubSystem::FadeOutMaterialByIndex(const UMeshComponent* Component, int32 MaterialIndex, FName ParameterName, float duration) {
}

void UFadeVisibilitySubSystem::FadeOutLight(const ULightComponent* Light, float duration) {
}

void UFadeVisibilitySubSystem::FadeLightToIntensity(ULightComponent* Light, float duration, float endIntensity) {
}

void UFadeVisibilitySubSystem::FadeLightByCurve(const ULightComponent* Light, FRuntimeFloatCurve& Curve) {
}

void UFadeVisibilitySubSystem::FadeInMaterialByName(const UMeshComponent* Component, FName Name, FName ParameterName, float duration) {
}

void UFadeVisibilitySubSystem::FadeInMaterialByIndex(const UMeshComponent* Component, int32 MaterialIndex, FName ParameterName, float duration) {
}

void UFadeVisibilitySubSystem::FadeInLight(const ULightComponent* Light, float duration) {
}


