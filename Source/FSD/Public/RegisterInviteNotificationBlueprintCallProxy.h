#pragma once
#include "CoreMinimal.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "BlueprintRegisterInvitiNotificationDelegateDelegate.h"
#include "RegisterInviteNotificationBlueprintCallProxy.generated.h"

class URegisterInviteNotificationBlueprintCallProxy;
class UObject;

UCLASS(Blueprintable)
class URegisterInviteNotificationBlueprintCallProxy : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlueprintRegisterInvitiNotificationDelegate OnInviteReceived;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlueprintRegisterInvitiNotificationDelegate OnInviteAccepted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlueprintRegisterInvitiNotificationDelegate OnInviteRejected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* WorldContextObject;
    
    URegisterInviteNotificationBlueprintCallProxy();
    UFUNCTION(BlueprintCallable)
    static URegisterInviteNotificationBlueprintCallProxy* RegisterInvitiNotification(UObject* NewWorldContextObject);
    
};

