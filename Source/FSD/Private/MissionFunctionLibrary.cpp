#include "MissionFunctionLibrary.h"

UMissionFunctionLibrary::UMissionFunctionLibrary() {
}

FString UMissionFunctionLibrary::GetSeedString(UObject* WorldContextObject) {
    return TEXT("");
}

bool UMissionFunctionLibrary::GetSeedsFromString(const FString& seedString, FGlobalMissionSeed& outGlobalSeed, int32& outMissionSeed, int32& outPlsSeed) {
    return false;
}

FDateTime UMissionFunctionLibrary::GetGlobalMissionBaseTime() {
    return FDateTime{};
}


