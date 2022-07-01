#include "FSDSaveGame.h"
#include "Templates/SubclassOf.h"

class UFSDSaveGame;
class UResourceData;
class UObject;
class UPlayerCharacterID;
class UItemID;
class AActor;
class UFSDGameInstance;

bool UFSDSaveGame::TrySellResource(UResourceData* Resource, int32 Amount, int32& Price) {
    return false;
}

bool UFSDSaveGame::TryDeductResources(const TMap<UResourceData*, int32>& NewResources) {
    return false;
}

bool UFSDSaveGame::TryDeductCredits(int32 Amount) {
    return false;
}

bool UFSDSaveGame::TryBuyResource(UResourceData* Resource, int32 Amount, int32& Price) {
    return false;
}

bool UFSDSaveGame::ShouldDisplayFirstSchematicMessage() const {
    return false;
}

void UFSDSaveGame::SetSonyInputSettingMotionXMapping(ESonyControllerMotionMapping NewValue) {
}

void UFSDSaveGame::SetSonyInputSettingLightMode(ESonyControllerLightMode NewValue) {
}

void UFSDSaveGame::SetSonyInputSettingFloat(UObject* WorldContext, ESonyInputSettingsFloats Setting, float NewValue) {
}

void UFSDSaveGame::SetSonyInputSettingBool(ESonyInputSettingsBools Setting, bool NewValue) {
}

bool UFSDSaveGame::SetPersonalAnalytics(bool State) {
    return false;
}

void UFSDSaveGame::SetIsModded(bool modded) {
}

void UFSDSaveGame::SetIndexAndName(int32 NewIndex, const FString& NewName) {
}

void UFSDSaveGame::SetHasSentSteamInfo() {
}

void UFSDSaveGame::SetHasJoinedXboxClub() {
}

void UFSDSaveGame::SetHasClaimSteamGroupLoot() {
}

void UFSDSaveGame::SetFaction(EFSDFaction newFaction, bool Reasign) {
}

void UFSDSaveGame::SetEquippedItemID(EItemCategory Category, UPlayerCharacterID* PlayerId, UItemID* Item) {
}

void UFSDSaveGame::SetEquippedItem(EItemCategory Category, UPlayerCharacterID* PlayerId, TSubclassOf<AActor> Item) {
}

void UFSDSaveGame::SetDiscordReward(bool State) {
}

void UFSDSaveGame::SetCharacterLoadout(UPlayerCharacterID* characterID, int32 loadoutNumber) {
}

void UFSDSaveGame::SetBoscoAllowed(bool aIsBoscoAllowed) {
}

bool UFSDSaveGame::SetAnonymousAnalytics(bool State) {
    return false;
}

void UFSDSaveGame::SaveToDisk() {
}

bool UFSDSaveGame::SaveSlotToDisk(UFSDSaveGame* SaveSlot, const FString& slotName, int32 NewUserIdx) {
    return false;
}

int32 UFSDSaveGame::RetireCharacter(UPlayerCharacterID* characterID) {
    return 0;
}

void UFSDSaveGame::ResetTutorials() {
}

void UFSDSaveGame::ResetSonyTouchSettings() {
}

void UFSDSaveGame::ResetSonyMotionSettings() {
}

void UFSDSaveGame::ResetSonyDualSenseSettings() {
}

void UFSDSaveGame::ResetRejoinSessionId() {
}

void UFSDSaveGame::RejoinAttempted() {
}

void UFSDSaveGame::RefreshLoadoutFromCharacter(UPlayerCharacterID* characterID) {
}

bool UFSDSaveGame::RecievedDiscordReward() {
    return false;
}

FString UFSDSaveGame::PromotedClassesString() {
    return TEXT("");
}

void UFSDSaveGame::MarkRetirementRewardScreenSeen(UPlayerCharacterID* characterID) {
}

void UFSDSaveGame::MarkFirstSchematicMessageSeen() {
}

void UFSDSaveGame::LevelUpCharacter(UObject* WorldContext, UPlayerCharacterID* characterID) {
}

bool UFSDSaveGame::IsObsolete() const {
    return false;
}

bool UFSDSaveGame::IsInMinersManual(FGuid ObjectID) const {
    return false;
}

bool UFSDSaveGame::IsFirstRejoinAttempt() {
    return false;
}

bool UFSDSaveGame::HasSeenRetirementRewardScreen() const {
    return false;
}

bool UFSDSaveGame::HasCredits(int32 Amount) const {
    return false;
}

bool UFSDSaveGame::HasCharacterRetired(UPlayerCharacterID* characterID) const {
    return false;
}

bool UFSDSaveGame::HasCharacterCompletedRetirementCampaign(UPlayerCharacterID* characterID) const {
    return false;
}

bool UFSDSaveGame::HasBackupWithMoreProgress(UFSDGameInstance* GameInstance) {
    return false;
}

bool UFSDSaveGame::HasAnyCharacterRetired() const {
    return false;
}

int32 UFSDSaveGame::GetTotalGamesPlayed() {
    return 0;
}

int32 UFSDSaveGame::GetTotalCharacterXP() const {
    return 0;
}

ESonyControllerMotionMapping UFSDSaveGame::GetSonyInputSettingMotionXMapping() const {
    return ESonyControllerMotionMapping::Yaw;
}

ESonyControllerLightMode UFSDSaveGame::GetSonyInputSettingLightMode() const {
    return ESonyControllerLightMode::Disabled;
}

float UFSDSaveGame::GetSonyInputSettingFloat(ESonyInputSettingsFloats Setting) const {
    return 0.0f;
}

bool UFSDSaveGame::GetSonyInputSettingBool(ESonyInputSettingsBools Setting) const {
    return false;
}

FDateTime UFSDSaveGame::GetSlotTimeStamp() const {
    return FDateTime{};
}

FString UFSDSaveGame::GetSlotLoadedFrom() const {
    return TEXT("");
}

int32 UFSDSaveGame::GetSelectedLoadoutIndex(UPlayerCharacterID* characterID) const {
    return 0;
}

FString UFSDSaveGame::GetSaveSlotName(int32 NewUserIdx) {
    return TEXT("");
}

int32 UFSDSaveGame::GetResourceSellingPrice(UResourceData* Resource, int32 Amount) const {
    return 0;
}

int32 UFSDSaveGame::GetResourceBuyingPrice(UResourceData* Resource, int32 Amount) const {
    return 0;
}

float UFSDSaveGame::GetResourceAmount(const UResourceData* Resource) const {
    return 0.0f;
}

int32 UFSDSaveGame::GetRequiredXPForLevel(int32 Level) const {
    return 0;
}

FString UFSDSaveGame::GetRejoinSessionId() {
    return TEXT("");
}

int32 UFSDSaveGame::GetPurchasableItemCount() const {
    return 0;
}

int32 UFSDSaveGame::GetPlayerRetirementRank() const {
    return 0;
}

int32 UFSDSaveGame::GetPlayerRank() const {
    return 0;
}

int32 UFSDSaveGame::GetPerkPoints() const {
    return 0;
}

FString UFSDSaveGame::GetName() {
    return TEXT("");
}

int32 UFSDSaveGame::GetMaxSaveSlots() {
    return 0;
}

int32 UFSDSaveGame::GetMainSaves(UFSDGameInstance* GameInstance, TArray<UFSDSaveGame*>& outMainSaves) {
    return 0;
}

bool UFSDSaveGame::GetIsModded() {
    return false;
}

int32 UFSDSaveGame::GetIndex() {
    return 0;
}

bool UFSDSaveGame::GetHasSentSteamInfo() {
    return false;
}

bool UFSDSaveGame::GetHasClaimedSteamGroupLoot() {
    return false;
}

EFSDFaction UFSDSaveGame::GetFaction() {
    return EFSDFaction::NoFaction;
}

UItemID* UFSDSaveGame::GetEquippedItemID(EItemCategory Category, UPlayerCharacterID* PlayerId) const {
    return NULL;
}

TSubclassOf<AActor> UFSDSaveGame::GetEquippedItem(EItemCategory Category, UPlayerCharacterID* PlayerId) const {
    return NULL;
}

int32 UFSDSaveGame::GetCredits() const {
    return 0;
}

int32 UFSDSaveGame::GetClassXP(UPlayerCharacterID* characterID) const {
    return 0;
}

int32 UFSDSaveGame::GetClassLevel(UPlayerCharacterID* characterID) const {
    return 0;
}

int32 UFSDSaveGame::GetCharacterRetirementCount(const FGuid& PlayerId) const {
    return 0;
}

bool UFSDSaveGame::GetBoscoAllowed() const {
    return false;
}

int32 UFSDSaveGame::GetAvailableUserSlotIndex(UFSDGameInstance* GameInstance) {
    return 0;
}

TArray<UFSDSaveGame*> UFSDSaveGame::GetAllSavesFromDisk(UFSDGameInstance* GameInstance) {
    return TArray<UFSDSaveGame*>();
}

void UFSDSaveGame::ForceSetIsModded(bool modded) {
}

void UFSDSaveGame::FixNamingOfMainSave(UFSDSaveGame* mainsave) {
}

bool UFSDSaveGame::DeleteFromDisk(UFSDGameInstance* GameInstance, const FString& slotName, int32 NewUserIdx) {
    return false;
}

bool UFSDSaveGame::DeductPerkPoints(int32 Amount) {
    return false;
}

void UFSDSaveGame::CheckPromotionAchievementProgress(UObject* WorldContext, bool IsRetroactive) {
}

bool UFSDSaveGame::CanAfford(const TMap<UResourceData*, int32>& NewResources) const {
    return false;
}

void UFSDSaveGame::AddPerkPoints(int32 Amount) {
}

void UFSDSaveGame::AddGamePlayed() {
}

int32 UFSDSaveGame::AddCredits(int32 Amount) {
    return 0;
}

int32 UFSDSaveGame::AddClassXP(UObject* WorldContext, UPlayerCharacterID* characterID, int32 XP) {
    return 0;
}

UFSDSaveGame::UFSDSaveGame() {
    this->VersionNumber = 0;
    this->bMilestoneResetShown = false;
    this->bYearTwoGiftClaimed = false;
    this->SaveCreatedInPatch = 1;
    this->PerkPoints = 0;
    this->HasRecievedDiscordReward = false;
    this->Faction = EFSDFaction::NoFaction;
    this->Credits = 0;
    this->LastBoughtDailyDealSeed = 0;
    this->LastCollectedCommunityRewardPeriodID = 0;
    this->FirstRejoinAttempt = false;
    this->HaveSkinsBeenReset = false;
    this->bHasOpenedDeepDiveTerminal = false;
    this->FirstSession = true;
    this->HasCompletedTutorial = false;
    this->HasPlayedTutorial = false;
    this->ShowHowToRestartTutorialPrompt = false;
    this->HasPlayedIntroMessage = false;
    this->HasSentSteamInfo = false;
    this->HasClaimedSteamGroupLoot = false;
    this->IsBoscoAllowed = true;
    this->HasJoinedXboxClub = false;
    this->HasSeenAnalyticsPopUp = false;
    this->AllowAnalyticsTracking = true;
    this->AllowPersonalAnalyticsTracking = true;
    this->IsModded = false;
    this->Index = -1;
    this->TotalPlayTimeSeconds = 0.00f;
    this->userIdx = 0;
    this->CurrLoadoutIdx = 0;
    this->SaveToDiskCounter = 0;
    this->BackupSaveIndex = 0;
    this->ExternalBackupSaveIndex = 0;
    this->NumberOfGamesPlayed = 0;
    this->LastPlayedCharacter = NULL;
    this->ShowInfoScreen = true;
    this->FSDGameInstance = NULL;
}

