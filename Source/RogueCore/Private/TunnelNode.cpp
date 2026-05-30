#include "TunnelNode.h"

FTunnelNode::FTunnelNode() {
    this->EntranceRoomID = 0;
    this->ExitRoomID = 0;
    this->ParametersOverride = nullptr;
    this->ID = 0;
    this->AddDirt = false;
    this->WeightedResourceAmount = 0.00f;
    this->TunnelSetting = nullptr;
    this->Entrance = FRoomEntrance();
    this->Exit = FRoomEntrance();
    this->Path = FTunnelPath();
    this->DirtStartLocation = FVector::ZeroVector;
}

