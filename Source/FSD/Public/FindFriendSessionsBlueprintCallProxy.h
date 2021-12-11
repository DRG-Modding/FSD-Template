#pragma once
#include "CoreMinimal.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "FindSessionsCallbackProxy.h"
#include "FindFriendSessionsBlueprintCallProxy.generated.h"

class UObject;
class UFindFriendSessionsBlueprintCallProxy;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFindFriendSessionsBlueprintCallProxyOnSuccess, const TArray<FBlueprintSessionResult>&, Results);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFindFriendSessionsBlueprintCallProxyOnFailure, const TArray<FBlueprintSessionResult>&, Results);

UCLASS()
class UFindFriendSessionsBlueprintCallProxy : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FFindFriendSessionsBlueprintCallProxyOnSuccess OnSuccess;
    
    UPROPERTY(BlueprintAssignable)
    FFindFriendSessionsBlueprintCallProxyOnFailure OnFailure;
    
    UPROPERTY(Transient)
    UObject* WorldContextObject;
    
    UFUNCTION(BlueprintCallable)
    static UFindFriendSessionsBlueprintCallProxy* FindFriendSessions(UObject* NewWorldContextObject, const FString& FriendId);
    
    UFindFriendSessionsBlueprintCallProxy();
};

