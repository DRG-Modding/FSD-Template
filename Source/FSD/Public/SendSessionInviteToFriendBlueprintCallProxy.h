#pragma once
#include "CoreMinimal.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "SendSessionInviteToFriendBlueprintCallProxy.generated.h"

class UObject;
class USendSessionInviteToFriendBlueprintCallProxy;

UCLASS(Blueprintable)
class USendSessionInviteToFriendBlueprintCallProxy : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEmptyOnlineDelegate OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEmptyOnlineDelegate OnFailure;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* WorldContextObject;
    
    USendSessionInviteToFriendBlueprintCallProxy();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USendSessionInviteToFriendBlueprintCallProxy* SendSessionInviteToFriend(UObject* NewWorldContextObject, const FString& FriendId);
    
};

