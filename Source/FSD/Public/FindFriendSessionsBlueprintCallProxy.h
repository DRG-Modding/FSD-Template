#pragma once
#include "CoreMinimal.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "BlueprintFindFriendSessionsResultDelegateDelegate.h"
#include "FindFriendSessionsBlueprintCallProxy.generated.h"

class UObject;
class UFindFriendSessionsBlueprintCallProxy;

UCLASS()
class UFindFriendSessionsBlueprintCallProxy : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FBlueprintFindFriendSessionsResultDelegate OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FBlueprintFindFriendSessionsResultDelegate OnFailure;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    UObject* WorldContextObject;
    
    UFindFriendSessionsBlueprintCallProxy();
    UFUNCTION(BlueprintCallable)
    static UFindFriendSessionsBlueprintCallProxy* FindFriendSessions(UObject* NewWorldContextObject, const FString& FriendId);
    
};

