#include "MissionStatsCollector.h"

class UCappedResource;

void UMissionStatsCollector::OnResourceIncremented(UCappedResource* Resource, float Amount) {
}

UMissionStatsCollector::UMissionStatsCollector() {
    this->Character = NULL;
}

