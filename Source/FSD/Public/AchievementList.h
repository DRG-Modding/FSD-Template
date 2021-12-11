#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "AchievementList.generated.h"

class UFSDAchievement;

UCLASS(BlueprintType)
class UAchievementList : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UFSDAchievement* WeakspotAchievement;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UFSDAchievement* MissionTimeAchievement;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UFSDAchievement* MissionHosterAchievement;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UFSDAchievement* RollerCoasterAchievement;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UFSDAchievement* DrillByShootingAchievement;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UFSDAchievement* BarrelKickerAchievement;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UFSDAchievement* Hazard3CompletedAchievement;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UFSDAchievement* Hazard3StreakAchievement;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UFSDAchievement* Hazard4CompletedAchievement;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UFSDAchievement* Hazard4StreakAchievement;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UFSDAchievement* Hazard5CompletedAchievement;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UFSDAchievement* Hazard5StreakAchievement;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UFSDAchievement* Hazard3NoKillNoSupplyAchievement;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UFSDAchievement* Hazard4NoKillNoSupplyAchievement;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UFSDAchievement* Hazard5NoKillNoSupplyAchievement;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UFSDAchievement* PlayedWithLowerRankAchievement;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UFSDAchievement* MilestoneAchievementPerfMatters;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UFSDAchievement* MilestoneAchievement;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UFSDAchievement* OwnedPerkAchievement;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UFSDAchievement* MovingOnUpAchievement;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UFSDAchievement* CorporateClimberAchievement;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UFSDAchievement* HatTrickAchievement;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UFSDAchievement* FullTeamAchievement;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UFSDAchievement* SilverTierEmployeeAchievement;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UFSDAchievement* ProTeamAchievement;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UFSDAchievement* GoldTierEmployeeAchievement;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UFSDAchievement* LegendaryTeamAchievement;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UFSDAchievement* AllVanityEquippedAchievement;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UFSDAchievement* MoustacheBuyerAchievement;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UFSDAchievement* MutatorAchievement;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UFSDAchievement* StateOfTheArtAchievement;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UFSDAchievement* ExploringMyOptionsAchievement;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UFSDAchievement* AdvancedRoboticsAchievement;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UFSDAchievement* WithoutAPaddleAchievement;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UFSDAchievement* FirstMissionCompleted;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UFSDAchievement* HundredMissionsCompleted;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UFSDAchievement* TenSoloMissionsCompleted;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UFSDAchievement* SupplyPodsCalledStat;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UFSDAchievement* LootbugsKilledStat;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UFSDAchievement* PraetoriansKilledStat;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UFSDAchievement* NormalDeepDiveCompleted;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UFSDAchievement* EliteDeepDiveCompleted;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UFSDAchievement* DeepDiveCompletedUnderTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UFSDAchievement* DeepDivesCompleted;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<UFSDAchievement*> AllAchievements;
    
    UAchievementList();
};

