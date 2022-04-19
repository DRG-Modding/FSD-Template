#pragma once
#include "CoreMinimal.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "AcceptInviteBlueprintCallProxy.generated.h"

class UAcceptInviteBlueprintCallProxy;
class UObject;

UCLASS()
class UAcceptInviteBlueprintCallProxy : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FEmptyOnlineDelegate OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FEmptyOnlineDelegate OnFailure;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    UObject* WorldContextObject;
    
    UAcceptInviteBlueprintCallProxy();
    UFUNCTION(BlueprintCallable)
    static UAcceptInviteBlueprintCallProxy* AcceptInvite(UObject* NewWorldContextObject, const FString& ListName, const FString& UserId);
    
};

