#pragma once
#include "CoreMinimal.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "AcceptInviteBlueprintCallProxy.generated.h"

class UObject;
class UAcceptInviteBlueprintCallProxy;

UCLASS(Blueprintable)
class UAcceptInviteBlueprintCallProxy : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEmptyOnlineDelegate OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEmptyOnlineDelegate OnFailure;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* WorldContextObject;
    
    UAcceptInviteBlueprintCallProxy();
    UFUNCTION(BlueprintCallable)
    static UAcceptInviteBlueprintCallProxy* AcceptInvite(UObject* NewWorldContextObject, const FString& ListName, const FString& UserId);
    
};

