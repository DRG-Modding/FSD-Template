#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "FSDPlayerControllerBase.h"
#include "ESpacerigStartType.h"
#include "PendingRewards.h"
#include "EChatSenderType.h"
#include "PendingRewardsStats.h"
#include "GrenadeExplodeOperationData.h"
#include "CarveWithColliderOperationData.h"
#include "CarveWithSTLMeshOperationData.h"
#include "PickaxeDigOperationData.h"
#include "RemoveFloatingIslandOperationData.h"
#include "MeltOperationData.h"
#include "DrillOperationData.h"
#include "SplineSegmentCarveOperationData.h"
#include "FSDPlayerController.generated.h"

class UDrinkableDataAsset;
class UTreasureRewarder;
class UTexture2D;
class UTutorialContentWidget;
class UFSDWidgetEffectsComponent;
class UPerkUsageComponent;
class UVanityItem;
class USoundMix;
class AActor;
class UFSDAchievement;
class UPlayerCharacterID;
class UTemporaryBuff;
class APlayerCharacter;
class AFSDPlayerState;
class USoundCue;
class UResourceData;
class UVictoryPose;
class UItemSkin;
class UItemID;
class UPickaxePart;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFSDPlayerControllerOnTransmitVoiceChanged, bool, isRecieving);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFSDPlayerControllerOnHideCurrentTutorialHint, bool, wasWatched);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFSDPlayerControllerOnEndLevelReceived);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFSDPlayerControllerOnChangeTutorialHintDuration, float, NewDuration);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFSDPlayerControllerOnReceiveVoiceChanged, bool, isRecieving);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FFSDPlayerControllerOnShowTutorialHint, const FText&, Text, const FText&, Title, const FText&, TaskText, UTexture2D*, Image, float, Duration);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFSDPlayerControllerOnLevelFinished);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFSDPlayerControllerOnShowTutorialWidget, TSubclassOf<UTutorialContentWidget>, TutorialWidget, bool, bIgnoreQueue);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFSDPlayerControllerOnPlayerCharacterPossesed);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFSDPlayerControllerOnChatOpened);

UCLASS()
class AFSDPlayerController : public AFSDPlayerControllerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FFSDPlayerControllerOnEndLevelReceived OnEndLevelReceived;
    
    UPROPERTY(BlueprintAssignable)
    FFSDPlayerControllerOnReceiveVoiceChanged OnReceiveVoiceChanged;
    
    UPROPERTY(BlueprintAssignable)
    FFSDPlayerControllerOnTransmitVoiceChanged OnTransmitVoiceChanged;
    
    UPROPERTY(BlueprintAssignable)
    FFSDPlayerControllerOnLevelFinished OnLevelFinished;
    
    UPROPERTY(BlueprintAssignable)
    FFSDPlayerControllerOnShowTutorialHint OnShowTutorialHint;
    
    UPROPERTY(BlueprintAssignable)
    FFSDPlayerControllerOnShowTutorialWidget OnShowTutorialWidget;
    
    UPROPERTY(BlueprintAssignable)
    FFSDPlayerControllerOnChangeTutorialHintDuration OnChangeTutorialHintDuration;
    
    UPROPERTY(BlueprintAssignable)
    FFSDPlayerControllerOnHideCurrentTutorialHint OnHideCurrentTutorialHint;
    
    UPROPERTY(BlueprintAssignable)
    FFSDPlayerControllerOnPlayerCharacterPossesed OnPlayerCharacterPossesed;
    
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UPerkUsageComponent* PerkUsageComponent;
    
    UPROPERTY(EditAnywhere)
    bool IsOnSpaceRig;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bReceivedEndLevel;
    
    UPROPERTY(EditAnywhere)
    TArray<USoundMix*> InitialSoundMixes;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool ServerTravelDone;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FFSDPlayerControllerOnChatOpened OnChatOpened;
    
    UPROPERTY(EditAnywhere, Export)
    UFSDWidgetEffectsComponent* WidgetEffects;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    ESpacerigStartType SpacerigSpawnType;
    
    UPROPERTY(EditAnywhere)
    bool bDetectGravityChanges;
    
public:
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
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_TravelDone();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_TerrainLateJoinPartReceived();
    
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
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RecieveClientTravelDone();
    
protected:
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
    UFUNCTION(Client, Reliable)
    void Client_TerrainLateJoinVisibleChunks(const TArray<uint32>& visibleChunks);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_TerrainLateJoinPart(const TArray<FGrenadeExplodeOperationData>& explosions, const TArray<FCarveWithColliderOperationData>& colliderCarves, const TArray<FCarveWithSTLMeshOperationData>& meshCarves, const TArray<FPickaxeDigOperationData>& pickAxe, const TArray<FRemoveFloatingIslandOperationData>& floating, const TArray<FDrillOperationData>& drills, const TArray<FMeltOperationData>& melts, const TArray<FSplineSegmentCarveOperationData>& splines);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_TerrainLateJoinDone();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_TerrainLateJoinDebris(const TArray<int32>& instanceComponentPairs);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_PlayCue(USoundCue* SoundCue);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_EndLevel_WaitForData(bool areObjectivesCompleted, int32 numberOfPlayersInPod);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_DeductResource(UResourceData* Resource, int32 Amount);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_CollectVanityItem(UTreasureRewarder* rewarder, UVanityItem* targetItem, UPlayerCharacterID* targetCharacter);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_CollectTreasureVictoryPose(UTreasureRewarder* rewarder, UVictoryPose* targetPose, UPlayerCharacterID* targetCharacter);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_CollectTreasureSkin(UTreasureRewarder* rewarder, UItemSkin* targetSkin, UItemID* targetItem);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_CollectTreasureDrink(UTreasureRewarder* rewarder, UDrinkableDataAsset* Drinkable);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_CollectPickaxePart(const UTreasureRewarder* rewarder, UPickaxePart* targetPart);
    
    UFUNCTION(BlueprintCallable)
    void ApplyPendingRewards();
    
    AFSDPlayerController();
};

