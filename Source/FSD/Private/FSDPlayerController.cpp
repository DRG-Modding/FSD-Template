#include "FSDPlayerController.h"
#include "Templates/SubclassOf.h"
#include "PerkUsageComponent.h"
#include "TerrainLatejoinComponent.h"
#include "FSDWidgetEffectsComponent.h"

class UTutorialContentWidget;
class UTexture2D;
class UTemporaryBuff;
class AActor;
class APlayerCharacter;
class UFSDAchievement;
class AFSDPlayerState;
class UPlayerCharacterID;
class USoundCue;
class UTreasureRewarder;
class UVanityItem;
class UVictoryPose;
class UItemSkin;
class UItemID;
class UPickaxePart;

void AFSDPlayerController::ToggleVoiceOn(bool Enabled) {
}

void AFSDPlayerController::ShowTutorialWidget(TSubclassOf<UTutorialContentWidget> TutorialWidget, bool ignoreQueue) {
}

void AFSDPlayerController::ShowTutorialHint(const FText& Text, const FText& Title, const FText& TaskText, UTexture2D* Image, float Duration) {
}

void AFSDPlayerController::SetPlayerStart(AActor* Start) {
}

void AFSDPlayerController::SetAchievementProgressFromServer_Implementation(UFSDAchievement* AchievementToSet, float Progress) {
}

void AFSDPlayerController::ServerSetUserHoldToRun_Implementation(bool Value) {
}
bool AFSDPlayerController::ServerSetUserHoldToRun_Validate(bool Value) {
    return true;
}

void AFSDPlayerController::Server_TravelDone_Implementation() {
}

void AFSDPlayerController::Server_SetLateJoinDone_Implementation() {
}
bool AFSDPlayerController::Server_SetLateJoinDone_Validate() {
    return true;
}

void AFSDPlayerController::Server_SetGenerationStatus_Implementation(const FString& Status, float Fraction) {
}
bool AFSDPlayerController::Server_SetGenerationStatus_Validate(const FString& Status, float Fraction) {
    return true;
}

void AFSDPlayerController::Server_SetGenerationFraction_Implementation(float Fraction) {
}
bool AFSDPlayerController::Server_SetGenerationFraction_Validate(float Fraction) {
    return true;
}

void AFSDPlayerController::Server_SetGenerationDone_Implementation() {
}
bool AFSDPlayerController::Server_SetGenerationDone_Validate() {
    return true;
}

void AFSDPlayerController::Server_SetExtraEndScreenTime_Implementation(float extraTime) {
}

void AFSDPlayerController::Server_SetControllerReady_Implementation() {
}
bool AFSDPlayerController::Server_SetControllerReady_Validate() {
    return true;
}

void AFSDPlayerController::Server_ResetHUD_Implementation() {
}
bool AFSDPlayerController::Server_ResetHUD_Validate() {
    return true;
}

void AFSDPlayerController::Server_NewMessage_Implementation(const FString& Sender, const FString& Text, EChatSenderType SenderType) {
}
bool AFSDPlayerController::Server_NewMessage_Validate(const FString& Sender, const FString& Text, EChatSenderType SenderType) {
    return true;
}

void AFSDPlayerController::Server_DrawProjectileDebugPath_Implementation(bool bDraw) {
}

void AFSDPlayerController::Server_ActivateTemporaryBuff_Implementation(UTemporaryBuff* buff) {
}
bool AFSDPlayerController::Server_ActivateTemporaryBuff_Validate(UTemporaryBuff* buff) {
    return true;
}

void AFSDPlayerController::SendLevelUpStatistics(const int32 currentRank) {
}





void AFSDPlayerController::ReadyToContinueFromEndScreen_Implementation() {
}
bool AFSDPlayerController::ReadyToContinueFromEndScreen_Validate() {
    return true;
}

void AFSDPlayerController::OnSaveGamePlayerProgressChanged(int32 Rank, int32 Stars) {
}

void AFSDPlayerController::OnSaveGameCreditsChanged(int32 Credits) {
}

void AFSDPlayerController::OnSaveGameCharacterProgressChanged(TSubclassOf<APlayerCharacter> CharacterClass, int32 Level, float Progress) {
}

void AFSDPlayerController::OnPlayerStateSelectedCharacterChanged(TSubclassOf<APlayerCharacter> CharacterClass) {
}



void AFSDPlayerController::HideTutorialHint(bool watched) {
}

bool AFSDPlayerController::HasPendingRewards() const {
    return false;
}

bool AFSDPlayerController::GetUseToggleTerrainScanner() {
    return false;
}

bool AFSDPlayerController::GetUseToggleLaserpointer() {
    return false;
}

bool AFSDPlayerController::GetUseHoldToRun() {
    return false;
}

AActor* AFSDPlayerController::GetPlayerStart() {
    return NULL;
}

bool AFSDPlayerController::GetPendingRewards(FPendingRewardsStats& OutStats, FPendingRewards& OutRewards) const {
    return false;
}

AFSDPlayerState* AFSDPlayerController::GetFSDPlayerState() const {
    return NULL;
}

void AFSDPlayerController::FlushRender() {
}

AActor* AFSDPlayerController::FindPlayerStart(UPlayerCharacterID* characterID) {
    return NULL;
}

void AFSDPlayerController::EndLevel() {
}

void AFSDPlayerController::Client_PlayCue_Implementation(USoundCue* SoundCue) {
}

void AFSDPlayerController::Client_EndLevel_WaitForData_Implementation(bool areObjectivesCompleted, int32 numberOfPlayersInPod) {
}

void AFSDPlayerController::Client_CollectVanityItem_Implementation(UTreasureRewarder* rewarder, UVanityItem* targetItem, UPlayerCharacterID* targetCharacter) {
}

void AFSDPlayerController::Client_CollectTreasureVictoryPose_Implementation(UTreasureRewarder* rewarder, UVictoryPose* targetPose, UPlayerCharacterID* targetCharacter) {
}

void AFSDPlayerController::Client_CollectTreasureSkin_Implementation(UTreasureRewarder* rewarder, UItemSkin* targetSkin, UItemID* targetItem) {
}

void AFSDPlayerController::Client_CollectPickaxePart_Implementation(const UTreasureRewarder* rewarder, UPickaxePart* targetPart) {
}

void AFSDPlayerController::ApplyPendingRewards() {
}

AFSDPlayerController::AFSDPlayerController() {
    this->PerkUsageComponent = CreateDefaultSubobject<UPerkUsageComponent>(TEXT("PerkUsageCompent"));
    this->LateJoinComponent = CreateDefaultSubobject<UTerrainLatejoinComponent>(TEXT("TerrainLateJoin"));
    this->IsOnSpaceRig = false;
    this->bReceivedEndLevel = false;
    this->ServerTravelDone = true;
    this->WidgetEffects = CreateDefaultSubobject<UFSDWidgetEffectsComponent>(TEXT("WidgetEffects"));
    this->SpacerigSpawnType = ESpacerigStartType::PlayerHub;
    this->bDetectGravityChanges = false;
}

