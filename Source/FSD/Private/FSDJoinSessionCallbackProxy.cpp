#include "FSDJoinSessionCallbackProxy.h"

class APlayerController;
class UObject;
class UFSDJoinSessionCallbackProxy;

UFSDJoinSessionCallbackProxy* UFSDJoinSessionCallbackProxy::FSDJoinSession(UObject* NewWorldContextObject, APlayerController* PlayerController, const FBlueprintSessionResult& SearchResult, const FString& FSDPassword, bool fromInvite) {
    return NULL;
}

UFSDJoinSessionCallbackProxy::UFSDJoinSessionCallbackProxy() {
    this->WorldContextObject = NULL;
}

