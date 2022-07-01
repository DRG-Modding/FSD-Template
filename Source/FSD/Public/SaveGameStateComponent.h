#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/ActorComponent.h"
#include "LoadoutChangedDelegateDelegate.h"
#include "PlayerProgress.h"
#include "CharacterProgress.h"
#include "ItemUpgradesChangedDelegateDelegate.h"
#include "PlayerProgressChangedSignatureDelegate.h"
#include "CharacterProgressChangedSignatureDelegate.h"
#include "SaveGameStatePerkItem.h"
#include "ItemLoadout.h"
#include "ActiveCampaingMission.h"
#include "ItemUpgradeSelection.h"
#include "SaveGameStateComponent.generated.h"

class AActor;
class UItemUpgrade;
class UPlayerCharacterID;
class UVictoryPose;
class UGeneratedMission;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USaveGameStateComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FItemUpgradeEquipSignature, TSubclassOf<AActor>, itemClass, UItemUpgrade*, Upgrade);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FItemUpgradeCraftSignature, UItemUpgrade*, Upgrade);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FCreditsChangedDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemUpgradesChangedDelegate OnEquippedPerksChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemUpgradeCraftSignature OnItemUpgradeCrafted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemUpgradeEquipSignature OnItemUpgradeEquipped;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemUpgradeEquipSignature OnItemUpgradeUnequipped;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerProgressChangedSignature OnPlayerProgressChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLoadoutChangedDelegate OnLoadoutChangedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterProgressChangedSignature OnCharacterStatsChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCreditsChangedDelegate OnCreditsChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Credits, meta=(AllowPrivateAccess=true))
    int32 Credits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSaveGameStatePerkItem> EquippedPerks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    UVictoryPose* VictoryPose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FItemLoadout EquippedLoadout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ActiveCampaignMission, meta=(AllowPrivateAccess=true))
    FActiveCampaingMission ActiveCampaignMission;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ItemUpgradeSelections, meta=(AllowPrivateAccess=true))
    TArray<FItemUpgradeSelection> ItemUpgradeSelections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_PlayerProgress, meta=(AllowPrivateAccess=true))
    FPlayerProgress PlayerProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CharacterStats, meta=(AllowPrivateAccess=true))
    TArray<FCharacterProgress> CharacterStats;
    
public:
    USaveGameStateComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
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
    
};

