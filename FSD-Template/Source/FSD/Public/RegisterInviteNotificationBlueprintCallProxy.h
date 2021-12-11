#pragma once
#include "CoreMinimal.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "BlueprintFriend.h"
#include "RegisterInviteNotificationBlueprintCallProxy.generated.h"

class UObject;
class URegisterInviteNotificationBlueprintCallProxy;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRegisterInviteNotificationBlueprintCallProxyOnInviteReceived, const FBlueprintFriend&, Results);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRegisterInviteNotificationBlueprintCallProxyOnInviteAccepted, const FBlueprintFriend&, Results);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRegisterInviteNotificationBlueprintCallProxyOnInviteRejected, const FBlueprintFriend&, Results);

UCLASS()
class URegisterInviteNotificationBlueprintCallProxy : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FRegisterInviteNotificationBlueprintCallProxyOnInviteReceived OnInviteReceived;
    
    UPROPERTY(BlueprintAssignable)
    FRegisterInviteNotificationBlueprintCallProxyOnInviteAccepted OnInviteAccepted;
    
    UPROPERTY(BlueprintAssignable)
    FRegisterInviteNotificationBlueprintCallProxyOnInviteRejected OnInviteRejected;
    
    UPROPERTY(Transient)
    UObject* WorldContextObject;
    
    UFUNCTION(BlueprintCallable)
    static URegisterInviteNotificationBlueprintCallProxy* RegisterInvitiNotification(UObject* NewWorldContextObject);
    
    URegisterInviteNotificationBlueprintCallProxy();
};

