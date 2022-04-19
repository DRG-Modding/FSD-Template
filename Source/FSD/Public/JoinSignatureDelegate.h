#pragma once
#include "CoreMinimal.h"
#include "FindSessionsCallbackProxy.h"
#include "JoinSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FJoinSignature, FBlueprintSessionResult, Session);

