#include "TunnelNode.h"

FTunnelNode::FTunnelNode() {
    this->EntranceRoomID = 0;
    this->ExitRoomID = 0;
    this->ParametersOverride = NULL;
    this->ID = 0;
    this->AddDirt = false;
    this->WeightedResourceAmount = 0.00f;
}

