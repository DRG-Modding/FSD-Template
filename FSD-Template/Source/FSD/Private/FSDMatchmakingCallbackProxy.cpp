#include "FSDMatchmakingCallbackProxy.h"

class UBiome;
class UObject;
class UFSDMatchmakingCallbackProxy;
class UDifficultySetting;
class APlayerController;
class UMissionTemplate;

UFSDMatchmakingCallbackProxy* UFSDMatchmakingCallbackProxy::FSDMatchmaking(UObject* WorldContextObject, APlayerController* PlayerController, const FFSDMatchmakingCallbackProxyFailDelegate& FailDelegate, UDifficultySetting* DesiredDifficulty, UBiome* desiredBiome, UMissionTemplate* desiredMission) {
    return NULL;
}

void UFSDMatchmakingCallbackProxy::CancelMatchmaking() {
}

UFSDMatchmakingCallbackProxy::UFSDMatchmakingCallbackProxy() {
    this->mission = NULL;
    this->Biome = NULL;
    this->Difficulty = NULL;
}

