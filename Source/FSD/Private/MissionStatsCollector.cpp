#include "MissionStatsCollector.h"

UMissionStatsCollector::UMissionStatsCollector(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Character = NULL;
}

void UMissionStatsCollector::OnResourceIncremented(UCappedResource* Resource, float Amount) {
}


