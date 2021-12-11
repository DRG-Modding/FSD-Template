#include "RoomEntrance.h"

FRoomEntrance::FRoomEntrance() {
    this->IsBLocked = false;
    this->EntranceType = ECaveEntranceType::EntranceAndExit;
    this->Priority = ECaveEntrancePriority::Primary;
    this->PathObstacleID = 0;
}

