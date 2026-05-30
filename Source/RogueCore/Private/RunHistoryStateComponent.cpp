#include "RunHistoryStateComponent.h"

URunHistoryStateComponent::URunHistoryStateComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void URunHistoryStateComponent::Server_RequestHistoryData_Implementation(URunHistoryStateComponent* Sender, AFSDPlayerState* TargetState, ERunHistoryNetMessageDataType Type) {
}

void URunHistoryStateComponent::RequestBuildData(AFSDPlayerState* TargetState) {
}

bool URunHistoryStateComponent::GetLatestDamageData(const int32 PlayerId, FParsedCharacterDamageData& OutData) {
    return false;
}

bool URunHistoryStateComponent::GetLatestBuildData(const int32 PlayerId, FParsedCharacterBuildData& OutData) {
    return false;
}

void URunHistoryStateComponent::Client_ReceiveDataDone_Implementation(ERunHistoryNetMessageDataType Type) {
}

void URunHistoryStateComponent::Client_ReceiveData_Implementation(const TArray<uint8>& CharacterData) {
}


