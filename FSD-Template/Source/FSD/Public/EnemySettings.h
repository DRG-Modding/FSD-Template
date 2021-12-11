#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Engine/DataAsset.h"
#include "RandFloatInterval.h"
#include "RandRange.h"
#include "EliteEnemyEntry.h"
#include "GameplayTagContainer.h"
#include "EnemySettings.generated.h"

class UDamageComponent;
class UEnemyDescriptor;
class UEnemyID;

UCLASS()
class UEnemySettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<UEnemyDescriptor*> EnemiesAllowedInWaves;
    
    UPROPERTY(EditAnywhere)
    FRandRange EnemyWaveRange;
    
    UPROPERTY(Transient)
    TMap<UEnemyID*, UEnemyDescriptor*> EnemyDescriptor;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagQuery EliteAllowQuery;
    
    UPROPERTY(EditAnywhere)
    TMap<UEnemyDescriptor*, FEliteEnemyEntry> HeroEnemies;
    
    UPROPERTY(EditAnywhere)
    FRandFloatInterval HeroEnemySpawn;
    
    UPROPERTY(EditAnywhere)
    int32 EliteRequiredCampaignProgress;
    
    UPROPERTY(EditAnywhere)
    TArray<TSubclassOf<UDamageComponent>> ExplodingEnemiesDamageComponents;
    
    UEnemySettings();
};

