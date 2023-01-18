#pragma once
#include "CoreMinimal.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "FSDCreateSessionCallbackProxy.generated.h"

class APlayerController;
class UFSDCreateSessionCallbackProxy;
class UObject;

UCLASS(Blueprintable, MinimalAPI)
class UFSDCreateSessionCallbackProxy : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEmptyOnlineDelegate OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEmptyOnlineDelegate OnFailure;
    
    UFSDCreateSessionCallbackProxy();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UFSDCreateSessionCallbackProxy* FSDCreateSession(UObject* WorldContextObject, APlayerController* PlayerController, int32 PublicConnections, bool bUseLAN, bool bFriendsOnly);
    
};

