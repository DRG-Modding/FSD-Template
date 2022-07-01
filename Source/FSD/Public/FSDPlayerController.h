#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "FSDPlayerControllerBase.h"
#include "OnPlayerCharacterPossesedDelegate.h"
#include "ChatOpenedDelegateDelegate.h"
#include "ESpacerigStartType.h"
#include "EChatSenderType.h"
#include "PendingRewardsStats.h"
#include "PendingRewards.h"
#include "FSDPlayerController.generated.h"

class UTexture2D;
class UTutorialContentWidget;
class UPerkUsageComponent;
class UTerrainLatejoinComponent;
class USoundMix;
class UFSDWidgetEffectsComponent;
class AActor;
class UFSDAchievement;
class UTemporaryBuff;
class APlayerCharacter;
class AFSDPlayerState;
class UPlayerCharacterID;
class USoundCue;
class UTreasureRewarder;
class UVanityItem;
class UVictoryPose;
class UItemSkin;
class UItemID;
class UPickaxePart;

UCLASS(Blueprintable)
class FSD_API AFSDPlayerController : public AFSDPlayerControllerBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReceivingVoiceSignature, bool, isRecieving);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FReceivedEndLevelDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FOnShowTutorialHint, const FText&, Text, const FText&, Title, const FText&, TaskText, UTexture2D*, Image, float, Duration);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHideTutorialHint, bool, wasWatched);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnChangeTutorialWidget, TSubclassOf<UTutorialContentWidget>, TutorialWidget, bool, bIgnoreQueue);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangeTutorialHintDuration, float, NewDuration);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FLevelFinishedSignature);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReceivedEndLevelDelegate OnEndLevelReceived;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReceivingVoiceSignature OnReceiveVoiceChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReceivingVoiceSignature OnTransmitVoiceChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLevelFinishedSignature OnLevelFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnShowTutorialHint OnShowTutorialHint;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangeTutorialWidget OnShowTutorialWidget;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangeTutorialHintDuration OnChangeTutorialHintDuration;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHideTutorialHint OnHideCurrentTutorialHint;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerCharacterPossesed OnPlayerCharacterPossesed;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChatOpenedDelegate OnChatOpened;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UPerkUsageComponent* PerkUsageComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTerrainLatejoinComponent* LateJoinComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsOnSpaceRig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReceivedEndLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USoundMix*> InitialSoundMixes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool ServerTravelDone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UFSDWidgetEffectsComponent* WidgetEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESpacerigStartType SpacerigSpawnType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDetectGravityChanges;
    
public:
    AFSDPlayerController();
    UFUNCTION(BlueprintCallable)
    void ToggleVoiceOn(bool Enabled);
    
    UFUNCTION(BlueprintCallable)
    void ShowTutorialWidget(TSubclassOf<UTutorialContentWidget> TutorialWidget, bool ignoreQueue);
    
    UFUNCTION(BlueprintCallable)
    void ShowTutorialHint(const FText& Text, const FText& Title, const FText& TaskText, UTexture2D* Image, float Duration);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerStart(AActor* Start);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void SetAchievementProgressFromServer(UFSDAchievement* AchievementToSet, float Progress);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetUserHoldToRun(bool Value);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_TravelDone();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetLateJoinDone();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetGenerationStatus(const FString& Status, float Fraction);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetGenerationFraction(float Fraction);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetGenerationDone();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetExtraEndScreenTime(float extraTime);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetControllerReady();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_ResetHUD();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_NewMessage(const FString& Sender, const FString& Text, EChatSenderType SenderType);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_DrawProjectileDebugPath(bool bDraw);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_ActivateTemporaryBuff(UTemporaryBuff* buff);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SendLevelUpStatistics(const int32 currentRank);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RecievePawnDestroyed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RecieveOnControllerReady();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveEndLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_EndLevel_WaitForData(bool areObjectivesCompleted, int32 numberOfPlayersInPod);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ReadyToContinueFromEndScreen();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnSaveGamePlayerProgressChanged(int32 Rank, int32 Stars);
    
    UFUNCTION(BlueprintCallable)
    void OnSaveGameCreditsChanged(int32 Credits);
    
    UFUNCTION(BlueprintCallable)
    void OnSaveGameCharacterProgressChanged(TSubclassOf<APlayerCharacter> CharacterClass, int32 Level, float Progress);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerStateSelectedCharacterChanged(TSubclassOf<APlayerCharacter> CharacterClass);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerSpawnBegin(int32 PlayerId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGenerationDone();
    
    UFUNCTION(BlueprintCallable)
    void HideTutorialHint(bool watched);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasPendingRewards() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetUseToggleTerrainScanner();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetUseToggleLaserpointer();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetUseHoldToRun();
    
    UFUNCTION(BlueprintCallable)
    AActor* GetPlayerStart();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPendingRewards(FPendingRewardsStats& OutStats, FPendingRewards& OutRewards) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFSDPlayerState* GetFSDPlayerState() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void FlushRender();
    
public:
    UFUNCTION(BlueprintCallable)
    AActor* FindPlayerStart(UPlayerCharacterID* characterID);
    
protected:
    UFUNCTION(BlueprintCallable)
    void EndLevel();
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_PlayCue(USoundCue* SoundCue);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_EndLevel_WaitForData(bool areObjectivesCompleted, int32 numberOfPlayersInPod);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_CollectVanityItem(UTreasureRewarder* rewarder, UVanityItem* targetItem, UPlayerCharacterID* targetCharacter);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_CollectTreasureVictoryPose(UTreasureRewarder* rewarder, UVictoryPose* targetPose, UPlayerCharacterID* targetCharacter);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_CollectTreasureSkin(UTreasureRewarder* rewarder, UItemSkin* targetSkin, UItemID* targetItem);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_CollectPickaxePart(const UTreasureRewarder* rewarder, UPickaxePart* targetPart);
    
    UFUNCTION(BlueprintCallable)
    void ApplyPendingRewards();
    
};

