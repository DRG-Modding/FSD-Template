#pragma once
#include "CoreMinimal.h"
#include "MissionTypeDescription.h"
#include "Engine/DataAsset.h"
#include "DamageTypeDescription.h"
#include "BiomeFeatures.h"
#include "MissionStepDescription.h"
#include "UObject/NoExportTypes.h"
#include "EDamageType.h"
#include "MinersManual.generated.h"

class UEnemyMinersManualData;
class ULoreScreenMasterWidget;
class UBiome;
class UMissionTemplate;
class UObject;
class UMinersManualData;

UCLASS(Blueprintable)
class UMinersManual : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<ULoreScreenMasterWidget>> BasicsPages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FText> BasicsPageHeaders;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<ULoreScreenMasterWidget>> CombatPages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<ULoreScreenMasterWidget>> ExtraMissionPages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<ULoreScreenMasterWidget>> ResourcePages;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UEnemyMinersManualData*> Enemies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UBiome>> BiomeReferences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UMissionTemplate>> MissionReferences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDamageTypeDescription> DamageTypeInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FMissionTypeDescription> MissionDescriptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FBiomeFeatures> BiomeFeatureDescriptions;
    
public:
    UMinersManual();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsObjectInMinersManual(UObject* WorldContext, UObject* Object);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMissionUnlocked(UObject* WorldContext, UMissionTemplate* mission);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBiomeUnlocked(UObject* WorldContext, UBiome* Biome);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FText> GetUnlockedCreatureLore(UObject* WorldContext, UEnemyMinersManualData* enemy, float& completePercentage);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<TSoftObjectPtr<UMissionTemplate>> GetMissions() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetMissionInfo(int32 MissionTypeIndex, FText& InfoHeadline, FText& InfoDescription, TArray<FMissionStepDescription>& Steps);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetEnemyKillCount(UObject* WorldContext, FGuid EnemyID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UEnemyMinersManualData*> GetEnemiesSorted();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UEnemyMinersManualData*> GetEnemies();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetDamageTypeDescriptions(TArray<EDamageType> damageTypes, TArray<FDamageTypeDescription>& Icon);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetDamageTypeDescription(EDamageType damageTypes, FDamageTypeDescription& Icon);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<TSoftObjectPtr<UBiome>> GetBiomes() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UMinersManualData*> GetBiomeFeatures(int32 BiomeIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FDamageTypeDescription> GetAllDamageTypeDescriptions();
    
};

