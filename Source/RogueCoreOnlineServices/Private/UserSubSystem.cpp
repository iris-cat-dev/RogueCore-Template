#include "UserSubSystem.h"

UUserSubSystem::UUserSubSystem() {
}

void UUserSubSystem::OnLoginStateChanged(EFSDLoginState LoginStatus, const FString& LoginResult) {
}

bool UUserSubSystem::IsCurrentUserLoggedIn(const UObject* WorldContext) {
    return false;
}


