#include "DataTerminalAnimInstance.h"

UDataTerminalAnimInstance::UDataTerminalAnimInstance() {
    this->DataTerminal = nullptr;
    this->FallingAnimationCurve = nullptr;
    this->RetractingAnimationCurve = nullptr;
    this->FallAnimationSpeed = 1.00f;
    this->RetractAnimationSpeed = 1.00f;
    this->BlinksPerSecond = 0.00f;
}

void UDataTerminalAnimInstance::OnSuccess() {
}

void UDataTerminalAnimInstance::OnFail() {
}

void UDataTerminalAnimInstance::OnBoxRepaired(int32 BoxIndex) {
}

void UDataTerminalAnimInstance::OnBegin() {
}


