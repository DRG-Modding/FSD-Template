#include "GameFunctionLibrary.h"

class UObject;
class UAudioComponent;
class UGoogleAnalyticsWrapper;
class APlayerCharacter;
class USoundBase;
class UWindowManager;
class UWindowWidget;
class AFSDGameModeSpaceRig;
class UFSDSaveGame;
class UCampaignManager;
class AFSDGameState;
class AFSDGameMode;
class UFSDGameInstance;
class UGameData;
class UDeepDiveManager;
class ADeepCSGWorld;
class UAsyncManager;

void UGameFunctionLibrary::SpawnOrUpdateAudio2D(UObject* WorldContext, UAudioComponent*& AudioComponent, USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier, FName FloatParamName, float FloatParam) {
}

void UGameFunctionLibrary::SetUsePushToTalk(bool Enable) {
}

void UGameFunctionLibrary::SetGlobalGravityZ(UObject* WorldContextObject, float GravityZ) {
}

void UGameFunctionLibrary::SetGlobalGravityScale(UObject* WorldContextObject, float GravityScale) {
}

bool UGameFunctionLibrary::IsWorldTickEnabled(UObject* WorldContextObject) {
    return false;
}

void UGameFunctionLibrary::IsTearingDown(UObject* caller, bool& NewIsTearingDown) {
}

bool UGameFunctionLibrary::IsPlayingOffline(UObject* WorldContextObject) {
    return false;
}

bool UGameFunctionLibrary::IsPlayInEditor(UObject* WorldContextObject) {
    return false;
}

UWindowManager* UGameFunctionLibrary::GetWindowManager(UObject* WorldContextObject) {
    return NULL;
}

bool UGameFunctionLibrary::GetUsePushToTalk() {
    return false;
}

UWindowWidget* UGameFunctionLibrary::GetTopWindow(UObject* WorldContextObject) {
    return NULL;
}

FString UGameFunctionLibrary::GetProjectVersion() {
    return TEXT("");
}

int32 UGameFunctionLibrary::GetNumPlayers(UObject* WorldContext) {
    return 0;
}

int32 UGameFunctionLibrary::GetNumAdditionalPlayers(UObject* WorldContext) {
    return 0;
}

FString UGameFunctionLibrary::GetMajorProjectVersion() {
    return TEXT("");
}

APlayerCharacter* UGameFunctionLibrary::GetLocalPlayerCharacter(UObject* WorldContext) {
    return NULL;
}

UGoogleAnalyticsWrapper* UGameFunctionLibrary::GetGoogleAnalyticsWrapper(UObject* WorldContextObject) {
    return NULL;
}

float UGameFunctionLibrary::GetGlobalGravityZ(UObject* WorldContextObject) {
    return 0.0f;
}

AFSDGameModeSpaceRig* UGameFunctionLibrary::GetFSDSRGameMode(UObject* WorldContextObject) {
    return NULL;
}

UFSDSaveGame* UGameFunctionLibrary::GetFSDSaveGame(UObject* WorldContextObject) {
    return NULL;
}

AFSDGameState* UGameFunctionLibrary::GetFSDGameState(UObject* WorldContextObject) {
    return NULL;
}

AFSDGameMode* UGameFunctionLibrary::GetFSDGameMode(UObject* WorldContextObject) {
    return NULL;
}

UFSDGameInstance* UGameFunctionLibrary::GetFSDGameInstance(UObject* WorldContextObject) {
    return NULL;
}

UGameData* UGameFunctionLibrary::GetFSDGameData() {
    return NULL;
}

UDeepDiveManager* UGameFunctionLibrary::GetDeepDiveManager(UObject* WorldContextObject) {
    return NULL;
}

ADeepCSGWorld* UGameFunctionLibrary::GetCSGWorld(UObject* WorldContextObject) {
    return NULL;
}

int32 UGameFunctionLibrary::GetChangelist() {
    return 0;
}

UCampaignManager* UGameFunctionLibrary::GetCampaingManager(UObject* WorldContextObject) {
    return NULL;
}

UAsyncManager* UGameFunctionLibrary::GetAsyncManager(UObject* WorldContextObject) {
    return NULL;
}

UGameFunctionLibrary::UGameFunctionLibrary() {
}

