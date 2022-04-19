#pragma once
#include "CoreMinimal.h"
#include "DiscordEoMData.h"
#include "OnDiscordServerInfoLoadedDelegate.h"
#include "ResponseSuccessChangedDelegate.h"
#include "UObject/Object.h"
#include "DiscordServerInviteData.h"
#include "DiscordEoMDataDelegateDelegate.h"
#include "DiscordRewardNotification.h"
#include "OnDiscordServerCountLoadedDelegate.h"
#include "OnDiscordUserInServerDelegate.h"
#include "DiscordWrapper.generated.h"

UCLASS(BlueprintType)
class UDiscordWrapper : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FDiscordServerInviteData ServerInfo;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FResponseSuccessChanged OnResponseSuccessChanged;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool LastResponseSuccessful;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FDiscordEoMDataDelegate OnDiscordEoMDataEvent;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool UserIn;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FDiscordRewardNotification rewardNotification;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 UserInStatus;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool HasEoM;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FDiscordEoMData EoMData;
    
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool IsConnected;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool ServerInfoLoaded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FOnDiscordServerInfoLoaded OnDiscordServerInfoLoaded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FOnDiscordServerCountLoaded OnDiscordServerCountLoaded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FOnDiscordUserInServer OnDiscordUserInServer;
    
    UDiscordWrapper();
    UFUNCTION(BlueprintCallable)
    void RequestUserInServer();
    
    UFUNCTION(BlueprintCallable)
    void RequestFactionAdjustment(int32 Faction, bool force);
    
    UFUNCTION(BlueprintCallable)
    void RequestEoMData();
    
    UFUNCTION(BlueprintCallable)
    void RequestDiscordServerInfo();
    
    UFUNCTION(BlueprintCallable)
    void RejectInviteSignature();
    
    UFUNCTION(BlueprintCallable)
    void IgnoreInviteSignature();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetAvatarURL();
    
    UFUNCTION(BlueprintCallable)
    void AdjustFaction();
    
    UFUNCTION(BlueprintCallable)
    void AcceptInviteSignature();
    
};

