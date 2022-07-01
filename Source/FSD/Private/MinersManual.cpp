#include "MinersManual.h"

class UEnemyMinersManualData;
class UObject;
class UMissionTemplate;
class UBiome;
class UMinersManualData;

bool UMinersManual::IsObjectInMinersManual(UObject* WorldContext, UObject* Object) {
    return false;
}

bool UMinersManual::IsMissionUnlocked(UObject* WorldContext, UMissionTemplate* mission) {
    return false;
}

bool UMinersManual::IsBiomeUnlocked(UObject* WorldContext, UBiome* Biome) {
    return false;
}

TArray<FText> UMinersManual::GetUnlockedCreatureLore(UObject* WorldContext, UEnemyMinersManualData* enemy, float& completePercentage) {
    return TArray<FText>();
}

TArray<TSoftObjectPtr<UMissionTemplate>> UMinersManual::GetMissions() const {
    return TArray<TSoftObjectPtr<UMissionTemplate>>();
}

void UMinersManual::GetMissionInfo(int32 MissionTypeIndex, FText& InfoHeadline, FText& InfoDescription, TArray<FMissionStepDescription>& Steps) {
}

int32 UMinersManual::GetEnemyKillCount(UObject* WorldContext, FGuid EnemyID) {
    return 0;
}

TArray<UEnemyMinersManualData*> UMinersManual::GetEnemiesSorted() {
    return TArray<UEnemyMinersManualData*>();
}

TArray<UEnemyMinersManualData*> UMinersManual::GetEnemies() {
    return TArray<UEnemyMinersManualData*>();
}

void UMinersManual::GetDamageTypeDescriptions(TArray<EDamageType> damageTypes, TArray<FDamageTypeDescription>& Icon) {
}

void UMinersManual::GetDamageTypeDescription(EDamageType damageTypes, FDamageTypeDescription& Icon) {
}

TArray<TSoftObjectPtr<UBiome>> UMinersManual::GetBiomes() const {
    return TArray<TSoftObjectPtr<UBiome>>();
}

TArray<UMinersManualData*> UMinersManual::GetBiomeFeatures(int32 BiomeIndex) {
    return TArray<UMinersManualData*>();
}

TArray<FDamageTypeDescription> UMinersManual::GetAllDamageTypeDescriptions() {
    return TArray<FDamageTypeDescription>();
}

UMinersManual::UMinersManual() {
}

