#include "RewardTreeNodeWidget.h"

URewardTreeNodeWidget::URewardTreeNodeWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->bIsStartingNode = false;
    this->NodeID = -1;
    this->Cost = 1;
    this->bIsClickable = false;
    this->Reward = nullptr;
    this->bIsPlaceholder = false;
    this->IsEditing = false;
    this->bIsBought = false;
    this->DefaultReward = nullptr;
}

void URewardTreeNodeWidget::ShowDetailsText_Implementation(bool InShow) {
}

void URewardTreeNodeWidget::SetSelectedEditor_Implementation(bool inIsSelected) {
}

void URewardTreeNodeWidget::SetIsEditing_Implementation(bool inIsEditing) {
}

void URewardTreeNodeWidget::SetIsBought(bool inIsBought) {
}

void URewardTreeNodeWidget::SetData(FRewardTreeNode nodeData) {
}

void URewardTreeNodeWidget::SetConnectedWidgets(TArray<URewardTreeNodeWidget*> inConnectedNodes) {
}


void URewardTreeNodeWidget::NodeUnhovered() {
}

void URewardTreeNodeWidget::NodeHovered() {
}

void URewardTreeNodeWidget::NodeClicked() {
}

bool URewardTreeNodeWidget::GetIsBought() {
    return false;
}


