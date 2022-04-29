#pragma once
#include "CoreMinimal.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "RejectInviteBlueprintCallProxy.generated.h"

class UObject;
class URejectInviteBlueprintCallProxy;

UCLASS(Blueprintable)
class URejectInviteBlueprintCallProxy : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEmptyOnlineDelegate OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEmptyOnlineDelegate OnFailure;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* WorldContextObject;
    
    URejectInviteBlueprintCallProxy();
    UFUNCTION(BlueprintCallable)
    static URejectInviteBlueprintCallProxy* RejectInvite(UObject* NewWorldContextObject, const FString& ListName, const FString& UserId);
    
};

