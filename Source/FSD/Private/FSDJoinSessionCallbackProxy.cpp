#include "FSDJoinSessionCallbackProxy.h"

class APlayerController;
class UFSDJoinSessionCallbackProxy;
class UObject;

UFSDJoinSessionCallbackProxy* UFSDJoinSessionCallbackProxy::FSDJoinSession(UObject* NewWorldContextObject, APlayerController* PlayerController, const FBlueprintSessionResult& SearchResult, const FString& FSDPassword, bool fromInvite) {
    return NULL;
}

UFSDJoinSessionCallbackProxy::UFSDJoinSessionCallbackProxy() {
    this->WorldContextObject = NULL;
}

