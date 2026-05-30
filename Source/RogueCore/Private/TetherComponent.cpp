#include "TetherComponent.h"
#include "Net/UnrealNetwork.h"

UTetherComponent::UTetherComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TetherMesh = nullptr;
    this->AutoSetup = false;
    this->ForwardConnection = nullptr;
    this->ConnectionDistance = 800.00f;
    this->ConnectionMode = ETetherConnectionMode::Both;
    this->ConnectionPriority = 0;
    this->ConnectionHistorySize = 3;
    this->MaxBackwardConnections = 2;
    this->GeneratesPower = false;
    this->PeriodicConnectionValidation = false;
    this->hasPower = false;
}

void UTetherComponent::ToggleConnectionValidation(bool Enabled, bool reactivate) {
}

void UTetherComponent::StopLoSTimer() {
}

void UTetherComponent::StartLoSTimer() {
}

void UTetherComponent::SetupConnectionpoint(UMeshComponent* mesh, const FName& SocketName) {
}

void UTetherComponent::SetConnectionRange(float Range) {
}

void UTetherComponent::ResetConnectionHistory() {
}

void UTetherComponent::OnRep_HasPower() {
}

void UTetherComponent::OnRep_ForwardConnection() {
}

void UTetherComponent::OnRep_BackConnection() {
}

void UTetherComponent::MessageTetherLine(const FName& Message, float Delay, ETetherMessageDirection messageDirection) {
}

void UTetherComponent::MessageBody(const FTetherMessageSettings& Message) {
}

bool UTetherComponent::IsStartOfLine() const {
    return false;
}

bool UTetherComponent::IsFullyConnected() const {
    return false;
}

bool UTetherComponent::IsEndOfLine() const {
    return false;
}

bool UTetherComponent::IsConnected() const {
    return false;
}

UTetherComponent* UTetherComponent::GetTetherlineEnd(bool front) {
    return NULL;
}

bool UTetherComponent::GetHasPower() const {
    return false;
}

UTetherComponent* UTetherComponent::GetForwardConnection() {
    return NULL;
}

float UTetherComponent::GetConnectionRange() const {
    return 0.0f;
}

FVector UTetherComponent::GetConnectionPoint() const {
    return FVector{};
}

TArray<UTetherComponent*> UTetherComponent::GetConnectionHistory() {
    return TArray<UTetherComponent*>();
}

bool UTetherComponent::DoesNetworkContainIntersection(UTetherComponent* Source, ETetherMessageDirection Direction) {
    return false;
}

void UTetherComponent::DisconnectFromTetherLine(bool Deactivate) {
}

bool UTetherComponent::ConnectToTetherLine() {
    return false;
}

void UTetherComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UTetherComponent, ForwardConnection);
    DOREPLIFETIME(UTetherComponent, BackConnection);
    DOREPLIFETIME(UTetherComponent, hasPower);
}


