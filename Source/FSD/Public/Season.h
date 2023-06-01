#pragma once
#include "CoreMinimal.h"
#include "Curves/CurveFloat.h"
#include "SavableDataAsset.h"
#include "SeasonLevel.h"
#include "SeasonalEventEntry.h"
#include "SeasonalEventEntryChance.h"
#include "UnassignedReward.h"
#include "WaveEntry.h"
#include "Season.generated.h"

class UGameDLC;
class UMissionStat;
class UMissionWarning;
class UReward;
class UTreeOfVanity;

UCLASS(Blueprintable)
class FSD_API USeason : public USavableDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText SeasonName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SeasonNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSeasonLevel> Levels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSeasonLevel RewardAfterAllLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUnassignedReward> UnassignedRewards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTreeOfVanity* TreeOfVanity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGameDLC* SeasonDLC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve SpawnChanceByMissionLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve MinorSpawnChanceByMissionLenght;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSeasonalEventEntry> SeasonalEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSeasonalEventEntry> MinorSeasonalEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSeasonalEventEntryChance> SpawnChanceSeasonalEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfScripChallenges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMissionStat*> ScripChallenges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWaveEntry> SeasonSpecificWaves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SeasonWaveInMissionChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMissionWarning* SeasonWarning;
    
    USeason();
protected:
    UFUNCTION(BlueprintCallable)
    void AddUnassignedReward(int32 Index, UReward* Reward);
    
    UFUNCTION(BlueprintCallable)
    void AddLevel(int32 Index, UReward* Reward, UReward* specialReward);
    
};

