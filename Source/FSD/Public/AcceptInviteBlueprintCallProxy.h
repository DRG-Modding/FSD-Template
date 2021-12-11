#pragma once
#include "CoreMinimal.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "AcceptInviteBlueprintCallProxy.generated.h"

class UObject;
class UAcceptInviteBlueprintCallProxy;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAcceptInviteBlueprintCallProxyOnSuccess);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAcceptInviteBlueprintCallProxyOnFailure);

UCLASS()
class UAcceptInviteBlueprintCallProxy : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FAcceptInviteBlueprintCallProxyOnSuccess OnSuccess;
    
    UPROPERTY(BlueprintAssignable)
    FAcceptInviteBlueprintCallProxyOnFailure OnFailure;
    
    UPROPERTY(Transient)
    UObject* WorldContextObject;
    
    UFUNCTION(BlueprintCallable)
    static UAcceptInviteBlueprintCallProxy* AcceptInvite(UObject* NewWorldContextObject, const FString& ListName, const FString& UserId);
    
    UAcceptInviteBlueprintCallProxy();
};

