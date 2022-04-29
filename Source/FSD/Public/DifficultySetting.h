#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SavableDataAsset.h"
#include "RandInterval.h"
#include "IRandRange.h"
#include "VeteranComposition.h"
#include "DifficultySetting.generated.h"

class UObject;
class UMissionStat;
class UCampaign;

UCLASS(Blueprintable)
class FSD_API UDifficultySetting : public USavableDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DifficultyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ShortDifficultyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText UnlockRequirementDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCampaign> CampaignRequirement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCampaign> SelectedByDefaultCampaignRequirement;
    
    UPROPERTY(EditAnywhere)
    float EnvironmentalDamageModifier;
    
    UPROPERTY(EditAnywhere, EditFixedSize)
    TArray<float> ExtraLargeEnemyDamageResistance;
    
    UPROPERTY(EditAnywhere, EditFixedSize)
    TArray<float> ExtraLargeEnemyDamageResistanceB;
    
    UPROPERTY(EditAnywhere, EditFixedSize)
    TArray<float> ExtraLargeEnemyDamageResistanceC;
    
    UPROPERTY(EditAnywhere, EditFixedSize)
    TArray<float> ExtraLargeEnemyDamageResistanceD;
    
    UPROPERTY(EditAnywhere, EditFixedSize)
    TArray<float> EnemyDamageResistance;
    
    UPROPERTY(EditAnywhere, EditFixedSize)
    TArray<float> SmallEnemyDamageResistance;
    
    UPROPERTY(EditAnywhere, EditFixedSize)
    TArray<float> EnemyDamageModifier;
    
    UPROPERTY(EditAnywhere)
    float EnemyToEnemyDamageModifier;
    
    UPROPERTY(EditAnywhere, EditFixedSize)
    TArray<float> EnemyCountModifier;
    
    UPROPERTY(EditAnywhere)
    float BossDifficultyScaler;
    
    UPROPERTY(EditAnywhere)
    float PointExtractionScaler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRandInterval EncounterDifficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRandInterval StationaryDifficulty;
    
    UPROPERTY(EditAnywhere)
    float SpecialEncounterModifier;
    
    UPROPERTY(EditAnywhere)
    float HazardBonus;
    
    UPROPERTY(EditAnywhere)
    float friendlyFireModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRandInterval EnemyWaveInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRandInterval EnemyNormalWaveInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRandInterval EnemyNormalWaveDifficulty;
    
    UPROPERTY(EditAnywhere)
    float WaveStartDelayScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRandInterval EnemyDiversity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRandInterval StationaryEnemyDiversity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRandRange DisruptiveEnemyPoolCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinPoolSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVeteranComposition Veterans;
    
    UPROPERTY(EditAnywhere)
    float SpeedModifier;
    
    UPROPERTY(EditAnywhere)
    float AttackCooldownModifier;
    
    UPROPERTY(EditAnywhere)
    float ProjectileSpeedModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DifficultyGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DifficultyGroupIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMissionStat*> MissionCompletedStats;
    
    UPROPERTY(EditAnywhere)
    float HeathRegenerationMax;
    
    UPROPERTY(EditAnywhere)
    float ReviveHealthRatio;
    
    UPROPERTY(EditAnywhere)
    float EliteChanceModifier;
    
    UPROPERTY(EditAnywhere)
    float EliteCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxActiveElites;
    
public:
    UDifficultySetting();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUnlocked(UObject* WorldContext) const;
    
    UFUNCTION(BlueprintPure)
    float AddHazardBonus(float BaseValue) const;
    
};

