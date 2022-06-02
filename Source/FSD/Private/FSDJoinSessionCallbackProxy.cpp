#include "FSDJoinSessionCallbackProxy.h"

class UObject;
class APlayerController;
class UFSDJoinSessionCallbackProxy;

UFSDJoinSessionCallbackProxy* UFSDJoinSessionCallbackProxy::FSDJoinSession(UObject* NewWorldContextObject, APlayerController* PlayerController, const FBlueprintSessionResult& SearchResult, const FString& FSDPassword, bool fromInvite) {
    return NULL;
}

UFSDJoinSessionCallbackProxy::UFSDJoinSessionCallbackProxy() {
    this->WorldContextObject = NULL;
}

