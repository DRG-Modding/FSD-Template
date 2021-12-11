#include "MissionShouts.h"

FMissionShouts::FMissionShouts() {
    this->AfterDropPodExit = NULL;
    this->OnExitPodDescending = NULL;
    this->OnExitPodArrived = NULL;
    this->OnCompletion = NULL;
    this->OnDeepDiveExitPodDescending = NULL;
    this->OnDeepDiveObjectiveCompletion = NULL;
    this->OnDeepDiveAllReturnObjectivesCompleted = NULL;
}

