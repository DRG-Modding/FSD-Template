#pragma once
#include "CoreMinimal.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "FindSessionsCallbackProxy.h"
#include "RegisterSessionInviteNotificationBlueprintCallProxy.generated.h"

class URegisterSessionInviteNotificationBlueprintCallProxy;
class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRegisterSessionInviteNotificationBlueprintCallProxyOnSessionUserInviteAccepted, const FBlueprintSessionResult&, SessionInvite);

UCLASS()
class URegisterSessionInviteNotificationBlueprintCallProxy : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FRegisterSessionInviteNotificationBlueprintCallProxyOnSessionUserInviteAccepted OnSessionUserInviteAccepted;
    
    UPROPERTY(Transient)
    UObject* WorldContextObject;
    
    UFUNCTION(BlueprintCallable)
    static URegisterSessionInviteNotificationBlueprintCallProxy* RegisterSessionInviteNotification(UObject* NewWorldContextObject);
    
    URegisterSessionInviteNotificationBlueprintCallProxy();
};

