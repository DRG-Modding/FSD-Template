#pragma once
#include "CoreMinimal.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "FindSessionsCallbackProxy.h"
#include "FSDJoinSessionCallbackProxy.generated.h"

class UObject;
class UFSDJoinSessionCallbackProxy;
class APlayerController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFSDJoinSessionCallbackProxyOnSuccess);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFSDJoinSessionCallbackProxyOnFailure);

UCLASS(MinimalAPI)
class UFSDJoinSessionCallbackProxy : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FFSDJoinSessionCallbackProxyOnSuccess OnSuccess;
    
    UPROPERTY(BlueprintAssignable)
    FFSDJoinSessionCallbackProxyOnFailure OnFailure;
    
private:
    UPROPERTY(Transient)
    UObject* WorldContextObject;
    
public:
    UFUNCTION(BlueprintCallable)
    static UFSDJoinSessionCallbackProxy* FSDJoinSession(UObject* NewWorldContextObject, APlayerController* PlayerController, const FBlueprintSessionResult& SearchResult, const FString& FSDPassword, bool fromInvite);
    
    UFSDJoinSessionCallbackProxy();
};

