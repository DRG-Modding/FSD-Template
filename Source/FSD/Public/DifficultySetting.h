#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SavableDataAsset.h"
#include "IRandRange.h"
#include "RandInterval.h"
#include "VeteranComposition.h"
#include "DifficultySetting.generated.h"

class UCampaign;
class UMissionStat;
class UObject;

UCLASS()
class FSD_API UDifficultySetting : public USavableDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText DifficultyName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText ShortDifficultyName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText UnlockRequirementDescription;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UCampaign> CampaignRequirement;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UCampaign> SelectedByDefaultCampaignRequirement;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float EnvironmentalDamageModifier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, EditFixedSize)
    TArray<float> ExtraLargeEnemyDamageResistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, EditFixedSize)
    TArray<float> ExtraLargeEnemyDamageResistanceB;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, EditFixedSize)
    TArray<float> ExtraLargeEnemyDamageResistanceC;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, EditFixedSize)
    TArray<float> ExtraLargeEnemyDamageResistanceD;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, EditFixedSize)
    TArray<float> EnemyDamageResistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, EditFixedSize)
    TArray<float> SmallEnemyDamageResistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, EditFixedSize)
    TArray<float> EnemyDamageModifier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, EditFixedSize)
    TArray<float> EnemyCountModifier;
    
    UPROPERTY(EditAnywhere)
    float BossDifficultyScaler;
    
    UPROPERTY(EditAnywhere)
    float PointExtractionScaler;
    
    UPROPERTY(EditAnywhere)
    FRandInterval EncounterDifficulty;
    
    UPROPERTY(EditAnywhere)
    FRandInterval StationaryDifficulty;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SpecialEncounterModifier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float HazardBonus;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float friendlyFireModifier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRandInterval EnemyWaveInterval;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRandInterval EnemyNormalWaveInterval;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRandInterval EnemyNormalWaveDifficulty;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float WaveStartDelayScale;
    
    UPROPERTY(EditAnywhere)
    FRandInterval EnemyDiversity;
    
    UPROPERTY(EditAnywhere)
    FRandInterval StationaryEnemyDiversity;
    
    UPROPERTY(EditAnywhere)
    FIRandRange DisruptiveEnemyPoolCount;
    
    UPROPERTY(EditAnywhere)
    int32 MinPoolSize;
    
    UPROPERTY(EditAnywhere)
    FVeteranComposition Veterans;
    
    UPROPERTY(EditAnywhere)
    float SpeedModifier;
    
    UPROPERTY(EditAnywhere)
    float AttackCooldownModifier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ProjectileSpeedModifier;
    
    UPROPERTY(EditAnywhere)
    int32 DifficultyGroup;
    
    UPROPERTY(EditAnywhere)
    int32 DifficultyGroupIndex;
    
    UPROPERTY(EditAnywhere)
    TArray<UMissionStat*> MissionCompletedStats;
    
    UPROPERTY(EditAnywhere)
    bool UseSharedHealthPool;
    
    UPROPERTY(EditAnywhere)
    float HeathRegenerationMax;
    
    UPROPERTY(EditAnywhere)
    float ReviveHealthRatio;
    
    UPROPERTY(EditAnywhere)
    float EliteChanceModifier;
    
    UPROPERTY(EditAnywhere)
    float EliteCooldown;
    
    UPROPERTY(EditAnywhere)
    int32 MaxActiveElites;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUnlocked(UObject* WorldContext) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float AddHazardBonus(float BaseValue) const;
    
    UDifficultySetting();
};

