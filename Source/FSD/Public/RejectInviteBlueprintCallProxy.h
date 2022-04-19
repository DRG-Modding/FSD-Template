#pragma once
#include "CoreMinimal.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "RejectInviteBlueprintCallProxy.generated.h"

class UObject;
class URejectInviteBlueprintCallProxy;

UCLASS()
class URejectInviteBlueprintCallProxy : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FEmptyOnlineDelegate OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FEmptyOnlineDelegate OnFailure;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    UObject* WorldContextObject;
    
    URejectInviteBlueprintCallProxy();
    UFUNCTION(BlueprintCallable)
    static URejectInviteBlueprintCallProxy* RejectInvite(UObject* NewWorldContextObject, const FString& ListName, const FString& UserId);
    
};

