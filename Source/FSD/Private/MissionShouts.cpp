#include "MissionShouts.h"

FMissionShouts::FMissionShouts() {
    this->AfterDropPodExit = NULL;
    this->OnExitPodDescending = NULL;
    this->OnExitPodArrived = NULL;
    this->OnCompletion = NULL;
    this->OnCompletion_OneOfMultiple = NULL;
    this->OnAllReturnObjectivesCompleted = NULL;
    this->OnDeepDiveExitPodDescending = NULL;
}

