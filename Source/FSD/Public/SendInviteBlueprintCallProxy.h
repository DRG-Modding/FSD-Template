#pragma once
#include "CoreMinimal.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "SendInviteBlueprintCallProxy.generated.h"

class UObject;
class USendInviteBlueprintCallProxy;

UCLASS()
class USendInviteBlueprintCallProxy : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FEmptyOnlineDelegate OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FEmptyOnlineDelegate OnFailure;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    UObject* WorldContextObject;
    
    USendInviteBlueprintCallProxy();
    UFUNCTION(BlueprintCallable)
    static USendInviteBlueprintCallProxy* SendInvite(UObject* NewWorldContextObject, const FString& ListName, const FString& UserId);
    
};

