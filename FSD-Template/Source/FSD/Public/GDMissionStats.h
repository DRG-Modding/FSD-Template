#pragma once
#include "CoreMinimal.h"
#include "GDMissionStats.generated.h"

class UMissionStat;
class UPlayerCharacterID;

USTRUCT(BlueprintType)
struct FGDMissionStats {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMissionStat* TimePlayed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMissionStat* DistanceTravelled;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMissionStat* EnemiesKilled;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMissionStat* MineralsMined;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMissionStat* MissionCompleted;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMissionStat* SoloMissionCompleted;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMissionStat* SecondaryMissionCompleted;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMissionStat* CharacterLevelUp;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMissionStat* VanityItemsBought;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMissionStat* ItemUpgradesBought;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMissionStat* DrinkablesConsumed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMissionStat* DrinkableRoundsOrdered;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMissionStat* BartenderCreditsTipped;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMissionStat* CampaignMissionsCompleted;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMissionStat* CampaignsCompleted;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMissionStat* TimesDowned;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMissionStat* TimesPassedOut;
    
    UPROPERTY(EditAnywhere)
    UMissionStat* WeaponsUnlockedStat;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMissionStat* SeasonEventsCompleted;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMissionStat* SeasonChallengesCompleted;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMissionStat* DeepDivesCompleted;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMissionStat* EliteDeepDivesCompleted;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMissionStat* CosmeticsCrafted;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMissionStat* WeaponSkinsCrafted;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMissionStat* WeaponOverclocksCrafted;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMissionStat* CraftingMasteryLevel;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMissionStat* DefendBlackBoxObjectivesCompleted;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMissionStat* RepairMiniMuleObjectivesCompleted;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMissionStat* DeepDiveCompletedBestTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMissionStat* EliteDeepDiveCompletedBestTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMissionStat* SpecialBeersUnlocked;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<UMissionStat*> AllMissionStats;
    
protected:
    UPROPERTY(EditAnywhere)
    TMap<UPlayerCharacterID*, UMissionStat*> CharacterMissionsCompleted;
    
public:
    FSD_API FGDMissionStats();
};

