#pragma once
#include "CoreMinimal.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "SendInviteBlueprintCallProxy.generated.h"

class UObject;
class USendInviteBlueprintCallProxy;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FSendInviteBlueprintCallProxyOnSuccess);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FSendInviteBlueprintCallProxyOnFailure);

UCLASS()
class USendInviteBlueprintCallProxy : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FSendInviteBlueprintCallProxyOnSuccess OnSuccess;
    
    UPROPERTY(BlueprintAssignable)
    FSendInviteBlueprintCallProxyOnFailure OnFailure;
    
    UPROPERTY(Transient)
    UObject* WorldContextObject;
    
    UFUNCTION(BlueprintCallable)
    static USendInviteBlueprintCallProxy* SendInvite(UObject* NewWorldContextObject, const FString& ListName, const FString& UserId);
    
    USendInviteBlueprintCallProxy();
};

