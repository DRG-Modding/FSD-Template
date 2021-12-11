#pragma once
#include "CoreMinimal.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "RejectInviteBlueprintCallProxy.generated.h"

class UObject;
class URejectInviteBlueprintCallProxy;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FRejectInviteBlueprintCallProxyOnSuccess);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FRejectInviteBlueprintCallProxyOnFailure);

UCLASS()
class URejectInviteBlueprintCallProxy : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FRejectInviteBlueprintCallProxyOnSuccess OnSuccess;
    
    UPROPERTY(BlueprintAssignable)
    FRejectInviteBlueprintCallProxyOnFailure OnFailure;
    
    UPROPERTY(Transient)
    UObject* WorldContextObject;
    
    UFUNCTION(BlueprintCallable)
    static URejectInviteBlueprintCallProxy* RejectInvite(UObject* NewWorldContextObject, const FString& ListName, const FString& UserId);
    
    URejectInviteBlueprintCallProxy();
};

