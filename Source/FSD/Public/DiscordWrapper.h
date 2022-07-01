#pragma once
#include "CoreMinimal.h"
#include "DiscordRewardNotification.h"
#include "UObject/Object.h"
#include "DiscordServerInviteData.h"
#include "ResponseSuccessChangedDelegate.h"
#include "DiscordEoMDataDelegateDelegate.h"
#include "DiscordEoMData.h"
#include "OnDiscordServerInfoLoadedDelegate.h"
#include "OnDiscordServerCountLoadedDelegate.h"
#include "OnDiscordUserInServerDelegate.h"
#include "DiscordWrapper.generated.h"

UCLASS(Blueprintable)
class UDiscordWrapper : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiscordServerInviteData ServerInfo;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FResponseSuccessChanged OnResponseSuccessChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool LastResponseSuccessful;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiscordEoMDataDelegate OnDiscordEoMDataEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UserIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiscordRewardNotification rewardNotification;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UserInStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HasEoM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiscordEoMData EoMData;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsConnected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ServerInfoLoaded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDiscordServerInfoLoaded OnDiscordServerInfoLoaded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDiscordServerCountLoaded OnDiscordServerCountLoaded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
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

