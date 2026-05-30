#include "FadeScreenSubSystem.h"

UFadeScreenSubSystem::UFadeScreenSubSystem() {
    this->GameInstance = nullptr;
}

void UFadeScreenSubSystem::WaitForLoadingScreenToFinish(const FLatentActionInfo LatentInfo, const UObject* WorldContext) {
}

void UFadeScreenSubSystem::WaitForFade(const FLatentActionInfo LatentInfo, const UObject* WorldContext, const EFadeScreenType FadeType) {
}

bool UFadeScreenSubSystem::IsScreenFadingToBlack(const UObject* WorldContext) {
    return false;
}

bool UFadeScreenSubSystem::IsScreenFadingFromBlack(const UObject* WorldContext) {
    return false;
}

bool UFadeScreenSubSystem::IsScreenFading(const UObject* WorldContext) {
    return false;
}

void UFadeScreenSubSystem::FadeScreenToBlackWithWait(const FLatentActionInfo LatentInfo, UObject* WorldContext, float FadeTime, float Delay, bool ResetExistingFades, bool CapFramerate, bool FadeWorldOnly, UTexture* LoadingImage) {
}

void UFadeScreenSubSystem::FadeScreenToBlackInstantly(const UObject* WorldContext, bool FadeWorldOnly) {
}

float UFadeScreenSubSystem::FadeScreenToBlack(const UObject* WorldContext, float FadeTime, float Delay, bool ResetExistingFades, bool CapFramerate, bool FadeWorldOnly, UTexture* FadingImage) {
    return 0.0f;
}

void UFadeScreenSubSystem::FadeScreenFromBlackWithWait(const FLatentActionInfo LatentInfo, UObject* WorldContext, float FadeTime, float Delay, bool ResetExistingFades, bool CapFramerate, bool FadeWorldOnly, UTexture* LoadingImage) {
}

void UFadeScreenSubSystem::FadeScreenFromBlackInstantly(const UObject* WorldContext, bool FadeWorldOnly) {
}

float UFadeScreenSubSystem::FadeScreenFromBlack(const UObject* WorldContext, float FadeTime, float Delay, bool ResetExistingFades, bool CapFramerate, bool FadeWorldOnly, UTexture* FadingImage) {
    return 0.0f;
}


