#pragma once
#include "CoreMinimal.h"
#include "BlueprintFindFriendSessionsResultDelegateDelegate.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "FindFriendSessionsBlueprintCallProxy.generated.h"

class UObject;
class UFindFriendSessionsBlueprintCallProxy;

UCLASS(Blueprintable)
class UFindFriendSessionsBlueprintCallProxy : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlueprintFindFriendSessionsResultDelegate OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlueprintFindFriendSessionsResultDelegate OnFailure;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* WorldContextObject;
    
    UFindFriendSessionsBlueprintCallProxy();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UFindFriendSessionsBlueprintCallProxy* FindFriendSessions(UObject* NewWorldContextObject, const FString& FriendId);
    
};

