#include "MissionStat.h"
#include "Templates/SubclassOf.h"

class UObject;
class UMissionStat;
class APlayerCharacter;
class UPlayerCharacterID;
class UTexture2D;

FText UMissionStat::MissionStatToText(EMissionStatType StatType, float Value) {
    return FText::GetEmpty();
}

void UMissionStat::Increment(UObject* WorldContext, UMissionStat* Stat, TSubclassOf<APlayerCharacter> CharacterClass, float Amount) {
}

float UMissionStat::GetStatMinCount(UObject* WorldContext) {
    return 0.0f;
}

float UMissionStat::GetStatMaxCount(UObject* WorldContext) {
    return 0.0f;
}

FText UMissionStat::GetStatCountTotalAsText(UObject* WorldContext) {
    return FText::GetEmpty();
}

float UMissionStat::GetStatCountTotal(UObject* WorldContext) {
    return 0.0f;
}

float UMissionStat::GetStatCountPct(UObject* WorldContext, TSubclassOf<APlayerCharacter> CharacterClass) {
    return 0.0f;
}

FText UMissionStat::GetStatCountAsText(UObject* WorldContext, UPlayerCharacterID* characterID) {
    return FText::GetEmpty();
}

float UMissionStat::GetStatCount(UObject* WorldContext, UPlayerCharacterID* characterID) {
    return 0.0f;
}

FString UMissionStat::GetSourceTitle() {
    return TEXT("");
}

FText UMissionStat::GetLowestStatCountAsText(UObject* WorldContext) {
    return FText::GetEmpty();
}

UTexture2D* UMissionStat::GetIcon() const {
    return NULL;
}

FText UMissionStat::GetHighestStatCountAsText(UObject* WorldContext) {
    return FText::GetEmpty();
}

FText UMissionStat::GetCategoryTitle() const {
    return FText::GetEmpty();
}

UMissionStat::UMissionStat() {
    this->Category = NULL;
    this->StatAchievement = NULL;
    this->MissionStatType = EMissionStatType::Float;
    this->DoNotShowInMissionStatView = false;
    this->ShowAllValuesCombined = true;
    this->ShowHighestValue = true;
}

