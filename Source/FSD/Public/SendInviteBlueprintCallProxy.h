#pragma once
#include "CoreMinimal.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "SendInviteBlueprintCallProxy.generated.h"

class UObject;
class USendInviteBlueprintCallProxy;

UCLASS(Blueprintable)
class USendInviteBlueprintCallProxy : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEmptyOnlineDelegate OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEmptyOnlineDelegate OnFailure;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* WorldContextObject;
    
    USendInviteBlueprintCallProxy();
    UFUNCTION(BlueprintCallable)
    static USendInviteBlueprintCallProxy* SendInvite(UObject* NewWorldContextObject, const FString& ListName, const FString& UserId);
    
};

