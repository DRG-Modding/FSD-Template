#include "FSDFindSessionsCallbackProxy.h"
#include "FSDFindSteamSessions.h"

UFSDFindSessionsCallbackProxy::UFSDFindSessionsCallbackProxy() {
    this->WorldContextObject = NULL;
    this->FSDFindSteamSessions = CreateDefaultSubobject<UFSDFindSteamSessions>(TEXT("FSDFindSteamSessions"));
}

void UFSDFindSessionsCallbackProxy::OnFSDCompleted(bool bSuccess, const TArray<FBlueprintSessionResult>& Results) {
}

void UFSDFindSessionsCallbackProxy::ManualRefreshServerList() {
}

UFSDFindSessionsCallbackProxy* UFSDFindSessionsCallbackProxy::FSDFindSessions(UObject* NewWorldContextObject, APlayerController* PlayerController, int32 MaxResults, bool bUseLAN) {
    return NULL;
}

UFSDFindSessionsCallbackProxy* UFSDFindSessionsCallbackProxy::FSDFindFullSessions(UObject* NewWorldContextObject, APlayerController* PlayerController, int32 MaxResults) {
    return NULL;
}


