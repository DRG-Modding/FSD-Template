#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DiscordServerInviteData.h"
#include "DiscordRewardNotification.h"
#include "DiscordServerData.h"
#include "DiscordEoMData.h"
#include "DiscordWrapper.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDiscordWrapperOnResponseSuccessChanged, bool, resp);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDiscordWrapperOnDiscordUserInServer, bool, isInServer);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDiscordWrapperOnDiscordEoMDataEvent, bool, HasEoM);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FDiscordWrapperOnDiscordServerInfoLoaded);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDiscordWrapperOnDiscordServerCountLoaded, const FDiscordServerData&, discordServerCount);

UCLASS(BlueprintType)
class UDiscordWrapper : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    FDiscordServerInviteData ServerInfo;
    
    UPROPERTY(BlueprintAssignable)
    FDiscordWrapperOnResponseSuccessChanged OnResponseSuccessChanged;
    
    UPROPERTY(BlueprintReadOnly)
    bool LastResponseSuccessful;
    
    UPROPERTY(BlueprintAssignable)
    FDiscordWrapperOnDiscordEoMDataEvent OnDiscordEoMDataEvent;
    
    UPROPERTY(BlueprintReadOnly)
    bool UserIn;
    
    UPROPERTY(BlueprintReadWrite)
    FDiscordRewardNotification rewardNotification;
    
    UPROPERTY(BlueprintReadOnly)
    int32 UserInStatus;
    
    UPROPERTY(BlueprintReadOnly)
    bool HasEoM;
    
    UPROPERTY(BlueprintReadOnly)
    FDiscordEoMData EoMData;
    
public:
    UPROPERTY(BlueprintReadOnly)
    bool IsConnected;
    
    UPROPERTY(BlueprintReadOnly)
    bool ServerInfoLoaded;
    
    UPROPERTY(BlueprintAssignable)
    FDiscordWrapperOnDiscordServerInfoLoaded OnDiscordServerInfoLoaded;
    
    UPROPERTY(BlueprintAssignable)
    FDiscordWrapperOnDiscordServerCountLoaded OnDiscordServerCountLoaded;
    
    UPROPERTY(BlueprintAssignable)
    FDiscordWrapperOnDiscordUserInServer OnDiscordUserInServer;
    
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
    
    UDiscordWrapper();
};

