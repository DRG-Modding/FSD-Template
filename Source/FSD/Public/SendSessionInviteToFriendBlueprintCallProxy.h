#pragma once
#include "CoreMinimal.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "SendSessionInviteToFriendBlueprintCallProxy.generated.h"

class UObject;
class USendSessionInviteToFriendBlueprintCallProxy;

UCLASS()
class USendSessionInviteToFriendBlueprintCallProxy : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FEmptyOnlineDelegate OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FEmptyOnlineDelegate OnFailure;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    UObject* WorldContextObject;
    
    USendSessionInviteToFriendBlueprintCallProxy();
    UFUNCTION(BlueprintCallable)
    static USendSessionInviteToFriendBlueprintCallProxy* SendSessionInviteToFriend(UObject* NewWorldContextObject, const FString& FriendId);
    
};

