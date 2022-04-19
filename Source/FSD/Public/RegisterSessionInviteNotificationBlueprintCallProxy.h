#pragma once
#include "CoreMinimal.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "BlueprintRegisterSessionInviteNotificationDelegateDelegate.h"
#include "RegisterSessionInviteNotificationBlueprintCallProxy.generated.h"

class URegisterSessionInviteNotificationBlueprintCallProxy;
class UObject;

UCLASS()
class URegisterSessionInviteNotificationBlueprintCallProxy : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FBlueprintRegisterSessionInviteNotificationDelegate OnSessionUserInviteAccepted;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    UObject* WorldContextObject;
    
    URegisterSessionInviteNotificationBlueprintCallProxy();
    UFUNCTION(BlueprintCallable)
    static URegisterSessionInviteNotificationBlueprintCallProxy* RegisterSessionInviteNotification(UObject* NewWorldContextObject);
    
};

