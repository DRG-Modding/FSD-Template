#include "RoomNode.h"

FRoomNode::FRoomNode() {
    this->ID = 0;
    this->RoomType = ERoomType::Start;
    this->CarvePass = 0;
    this->Radius = 0.00f;
    this->CanHaveEnemies = false;
    this->ResourceMultiplier = 0.00f;
    this->WeightedResourceAmount = 0.00f;
}

