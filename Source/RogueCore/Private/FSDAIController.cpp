#include "FSDAIController.h"

AFSDAIController::AFSDAIController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    const FProperty* p_PathFollowingComponent = GetClass()->FindPropertyByName("PathFollowingComponent");
    (*p_PathFollowingComponent->ContainerPtrToValuePtr<UPathFollowingComponent*>(this)) = nullptr;
    this->LOSTraceChannel = ECC_GameTraceChannel3;
}

void AFSDAIController::SetStaggered(bool IsStaggered) {
}

void AFSDAIController::SetAlerted(bool isAlerted) {
}

void AFSDAIController::ResumeLogic() {
}

void AFSDAIController::RegisterBlackboardChanges(const FName& Key) {
}


void AFSDAIController::PauseLogic() {
}

void AFSDAIController::OnAttackingChanged(bool attacking) {
}

bool AFSDAIController::IsSpawnAnimationCompleted() const {
    return false;
}

bool AFSDAIController::GetIsAlerted() const {
    return false;
}


