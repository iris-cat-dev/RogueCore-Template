#include "RewardTreeNode.h"

FRewardTreeNode::FRewardTreeNode() {
    this->Reward = nullptr;
    this->Cost = 0;
    this->NodeID = 0;
    this->bIsBig = false;
    this->bIsStartingNode = false;
    this->position = FVector2D::ZeroVector;
}

