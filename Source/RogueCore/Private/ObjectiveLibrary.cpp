#include "ObjectiveLibrary.h"

UObjectiveLibrary::UObjectiveLibrary() {
}

FUsableAccessDeniedInformation UObjectiveLibrary::GetRequiredObjectivesNotCompleteInformation(const UObject* WorldContext) {
    return FUsableAccessDeniedInformation{};
}

bool UObjectiveLibrary::AreRequiredObjectivesComplete(const UObject* WorldContext) {
    return false;
}


