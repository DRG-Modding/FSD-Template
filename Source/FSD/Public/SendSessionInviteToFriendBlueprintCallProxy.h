#pragma once
#include "CoreMinimal.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "SendSessionInviteToFriendBlueprintCallProxy.generated.h"

class USendSessionInviteToFriendBlueprintCallProxy;
class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FSendSessionInviteToFriendBlueprintCallProxyOnSuccess);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FSendSessionInviteToFriendBlueprintCallProxyOnFailure);

UCLASS()
class USendSessionInviteToFriendBlueprintCallProxy : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FSendSessionInviteToFriendBlueprintCallProxyOnSuccess OnSuccess;
    
    UPROPERTY(BlueprintAssignable)
    FSendSessionInviteToFriendBlueprintCallProxyOnFailure OnFailure;
    
    UPROPERTY(Transient)
    UObject* WorldContextObject;
    
    UFUNCTION(BlueprintCallable)
    static USendSessionInviteToFriendBlueprintCallProxy* SendSessionInviteToFriend(UObject* NewWorldContextObject, const FString& FriendId);
    
    USendSessionInviteToFriendBlueprintCallProxy();
};

