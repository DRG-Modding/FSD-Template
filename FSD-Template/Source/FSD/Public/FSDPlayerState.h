#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/PlayerState.h"
#include "GameplayTagContainer.h"
#include "RewardTexts.h"
#include "EChatSenderType.h"
#include "XPReward.h"
#include "CharacterProgress.h"
#include "EGameOwnerStatus.h"
#include "CreditsReward.h"
#include "FSDPlayerState.generated.h"

class UPlayerStatsComponent;
class UDamageClass;
class UPlayerResourceComponent;
class APlayerCharacter;
class AActor;
class UVanityItem;
class UPlayerRejoinState;
class USaveGameStateComponent;
class UPlayerCharacterID;
class AFSDPlayerController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFSDPlayerStateOnPlayerCharacterSpawned, APlayerCharacter*, PlayerCharacter);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFSDPlayerStateOnFractionLevelGenerated, float, Fraction);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFSDPlayerStateOnPlayerTalkingChanged, bool, IsTalking);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFSDPlayerStateOnSelectedCharacterChanged, TSubclassOf<APlayerCharacter>, NewCharacter);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFSDPlayerStateOnSupplyStatusChangedEvent, float, ammoStatus01, float, healthStatus01);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFSDPlayerStateOnLevelGenerationStateChanged, const FString&, NewState);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FFSDPlayerStateOnEnemyKilledEvent, const FGameplayTagContainer&, enemyTags, AActor*, enemy, UDamageClass*, DamageClass);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFSDPlayerStateOnPlayerNameChanged, const FString&, NewName);

UCLASS()
class AFSDPlayerState : public APlayerState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FFSDPlayerStateOnPlayerCharacterSpawned OnPlayerCharacterSpawned;
    
    UPROPERTY(BlueprintAssignable)
    FFSDPlayerStateOnPlayerTalkingChanged OnPlayerTalkingChanged;
    
    UPROPERTY(BlueprintAssignable)
    FFSDPlayerStateOnSelectedCharacterChanged OnSelectedCharacterChanged;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_FractionLevelGenerated)
    float FractionLevelGenerated;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_LevelGenerationState)
    FString LevelGenerationState;
    
    UPROPERTY(BlueprintAssignable)
    FFSDPlayerStateOnSupplyStatusChangedEvent OnSupplyStatusChangedEvent;
    
    UPROPERTY(BlueprintAssignable)
    FFSDPlayerStateOnEnemyKilledEvent OnEnemyKilledEvent;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    TArray<UVanityItem*> LatestEquipedVanity;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, ReplicatedUsing=OnRep_SelectedCharacter)
    TSubclassOf<APlayerCharacter> SelectedCharacter;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    bool bIsServer;
    
    UPROPERTY(EditAnywhere)
    bool ShouldCopyProperties;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_GameOwnerStatus)
    uint8 gameOwnerStatus;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsOnSpaceRig;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UPlayerStatsComponent* PlayerStatsComponent;
    
    UPROPERTY(Export, VisibleAnywhere)
    UPlayerRejoinState* RejoinState;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USaveGameStateComponent* SaveGameStateComponent;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_PlayerCharacter)
    APlayerCharacter* PlayerCharacter;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool IsInMission;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool IsTalking;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool HasGeneratedLevel;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient)
    bool HasSelectedCharacter;
    
    UPROPERTY(Replicated, Transient)
    int32 PlayerSortId;
    
    UPROPERTY(BlueprintAssignable)
    FFSDPlayerStateOnPlayerNameChanged OnPlayerNameChanged;
    
    UPROPERTY(BlueprintAssignable)
    FFSDPlayerStateOnFractionLevelGenerated OnFractionLevelGenerated;
    
    UPROPERTY(BlueprintAssignable)
    FFSDPlayerStateOnLevelGenerationStateChanged OnLevelGenerationStateChanged;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    UPlayerResourceComponent* PlayerResources;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_SupplyAmmoStatus)
    uint8 SupplyAmmoStatus;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_SupplyHealthStatus)
    uint8 SupplyHealthStatus;
    
    UPROPERTY(EditAnywhere)
    FRewardTexts RewardTexts;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetSelectedCharacterID(UPlayerCharacterID* characterID);
    
    UFUNCTION(BlueprintCallable)
    void SetSelectedCharacter(TSubclassOf<APlayerCharacter> NewCharacter);
    
    UFUNCTION(BlueprintCallable)
    void SetHasGeneratedLevel(bool hasgenerated);
    
    UFUNCTION(BlueprintCallable)
    void SetCanOnlySpectate(bool canOnlySpectate);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetSelectedCharacter(TSubclassOf<APlayerCharacter> NewCharacter);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetSupplyStatus(uint8 StatusHealth, uint8 StatusAmmo);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetGameOwnerStatus(int32 NewGameOwnerStatus);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_SupplyHealthStatus();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SupplyAmmoStatus();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SelectedCharacter();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PlayerCharacter();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_LevelGenerationState();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_GameOwnerStatus();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_FractionLevelGenerated();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLateJoinFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasNormalOwnerStatus() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetXPRewardsSum();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FXPReward> GetXPRewards();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FXPReward> GetXPRewardDeepDive(int32 StagesCompleted);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetUIPing();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSupplyHealthStatus() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSupplyAmmoStatus() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSelectedCharacterLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPlayerCharacterID* GetSelectedCharacterID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<APlayerCharacter> GetSelectedCharacter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCharacterProgress GetSelectCharacterProgress();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPlayerResourceComponent* GetPlayerResourceComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayerRank() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFSDPlayerController* GetPlayerController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetHasGeneratedLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetGameOwnerStatus(EGameOwnerStatus Status) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    TArray<FCreditsReward> GetDeepDiveCreditsReward(int32 StagesCompleted, int32 goldCollected);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EChatSenderType GetChatSenderType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCharacterProgress GetCharacterProgress(UPlayerCharacterID* characterID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCharacterLevel(UPlayerCharacterID* characterID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CharacterSelected();
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    AFSDPlayerState();
};

