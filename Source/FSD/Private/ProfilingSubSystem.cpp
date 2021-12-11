#include "ProfilingSubSystem.h"

float UProfilingSubSystem::GetTotalTime() const {
    return 0.0f;
}

TArray<FProfileEntry> UProfilingSubSystem::GetEntries() const {
    return TArray<FProfileEntry>();
}

TArray<FProfileCategoryTiming> UProfilingSubSystem::GetCategoryTimings() const {
    return TArray<FProfileCategoryTiming>();
}

UProfilingSubSystem::UProfilingSubSystem() {
}

