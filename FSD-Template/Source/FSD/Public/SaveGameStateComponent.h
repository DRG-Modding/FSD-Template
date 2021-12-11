#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/ActorComponent.h"
#include "ItemLoadout.h"
#include "PlayerProgress.h"
#include "ActiveCampaingMission.h"
#include "SaveGameStatePerkItem.h"
#include "ItemUpgradeSelection.h"
#include "CharacterProgress.h"
#include "SaveGameStateComponent.generated.h"

class UItemUpgrade;
class AActor;
class AFSDPlayerState;
class UVictoryPose;
class UPlayerCharacterID;
class UGeneratedMission;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FSaveGameStateComponentOnCreditsChanged);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSaveGameStateComponentOnPlayerProgressChanged, AFSDPlayerState*, PlayerState, FPlayerProgress, Progress);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSaveGameStateComponentOnItemUpgradeEquipped, TSubclassOf<AActor>, itemClass, UItemUpgrade*, Upgrade);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FSaveGameStateComponentOnEquippedPerksChanged);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FSaveGameStateComponentOnLoadoutChangedEvent);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSaveGameStateComponentOnItemUpgradeCrafted, UItemUpgrade*, Upgrade);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSaveGameStateComponentOnItemUpgradeUnequipped, TSubclassOf<AActor>, itemClass, UItemUpgrade*, Upgrade);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSaveGameStateComponentOnCharacterStatsChanged, AFSDPlayerState*, PlayerState);

UCLASS(BlueprintType)
class USaveGameStateComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FSaveGameStateComponentOnEquippedPerksChanged OnEquippedPerksChanged;
    
    UPROPERTY(BlueprintAssignable)
    FSaveGameStateComponentOnItemUpgradeCrafted OnItemUpgradeCrafted;
    
    UPROPERTY(BlueprintAssignable)
    FSaveGameStateComponentOnItemUpgradeEquipped OnItemUpgradeEquipped;
    
    UPROPERTY(BlueprintAssignable)
    FSaveGameStateComponentOnItemUpgradeUnequipped OnItemUpgradeUnequipped;
    
    UPROPERTY(BlueprintAssignable)
    FSaveGameStateComponentOnPlayerProgressChanged OnPlayerProgressChanged;
    
    UPROPERTY(BlueprintAssignable)
    FSaveGameStateComponentOnLoadoutChangedEvent OnLoadoutChangedEvent;
    
    UPROPERTY(BlueprintAssignable)
    FSaveGameStateComponentOnCharacterStatsChanged OnCharacterStatsChanged;
    
    UPROPERTY(BlueprintAssignable)
    FSaveGameStateComponentOnCreditsChanged OnCreditsChanged;
    
protected:
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_Credits)
    int32 Credits;
    
    UPROPERTY(Transient)
    TArray<FSaveGameStatePerkItem> EquippedPerks;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    UVictoryPose* VictoryPose;
    
    UPROPERTY(Transient)
    FItemLoadout EquippedLoadout;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_ActiveCampaignMission)
    FActiveCampaingMission ActiveCampaignMission;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_ItemUpgradeSelections)
    TArray<FItemUpgradeSelection> ItemUpgradeSelections;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_PlayerProgress)
    FPlayerProgress PlayerProgress;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_CharacterStats)
    TArray<FCharacterProgress> CharacterStats;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetCampaign();
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetVictoryPose(UVictoryPose* pose);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetPlayerProgress(const FPlayerProgress& Progress);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetLoadout(const FItemLoadout& Loadout, const TArray<FItemUpgradeSelection>& weaponLoadouts);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetEquippedPerks(const TArray<FSaveGameStatePerkItem>& perks);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetCredits(const int32 Amount);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetCharacterStats(const TArray<FCharacterProgress>& Stats);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetActiveCampaignMission(FActiveCampaingMission Data);
    
public:
    UFUNCTION(BlueprintCallable)
    void RefreshLoadoutFromSave(UPlayerCharacterID* characterID);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_PlayerProgress();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ItemUpgradeSelections();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Credits();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CharacterStats();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ActiveCampaignMission();
    
public:
    UFUNCTION(BlueprintCallable)
    FCharacterProgress GetCharacterStat(UPlayerCharacterID* characterID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGeneratedMission* GetActiveCampaignMission() const;
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    USaveGameStateComponent();
};

