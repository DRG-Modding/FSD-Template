#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EDisconnectReason.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EServerSortOrder.h"
#include "FindSessionsCallbackProxy.h"
#include "EFSDNATType.h"
#include "EMissionStructure.h"
#include "FriendInfo.h"
#include "EFSDMissionStatus.h"
#include "UObject/NoExportTypes.h"
#include "EServerDistance.h"
#include "SessionHandling.generated.h"

class UFSDGameInstance;
class UObject;
class UBiome;
class UPlayerCharacterID;
class UMissionTemplate;
class APlayerCharacter;
class UDifficultySetting;

UCLASS(Blueprintable)
class USessionHandling : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USessionHandling();
    UFUNCTION(BlueprintCallable)
    static void StopVoice(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void StartVoice(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool StartSearchForFriends(int32 localUserNum, UFSDGameInstance* GameInstance);
    
    UFUNCTION(BlueprintCallable)
    static void StartCheckForInstalledDLC(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void SortServerList(UObject* WorldContextObject, EServerSortOrder order, bool Reverse, bool sortByFriends, UPARAM(Ref) TArray<FBlueprintSessionResult>& servers);
    
    UFUNCTION(BlueprintCallable)
    static void ShowStoreUI(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void ShowInviteUI(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void JoinOfficialXboxClub(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsVoiceChatting();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsInActiveSession();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDisconnectReasonAKick(EDisconnectReason reason);
    
    UFUNCTION(BlueprintCallable)
    static FString GetVoiceStatus();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetSessionJoinError(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool GetOnlinePlayerName(int32 localUserNum, FString& Name);
    
    UFUNCTION(BlueprintCallable)
    static EFSDNATType GetNATType(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EMissionStructure GetMissionStructure(const FBlueprintSessionResult& Result);
    
    UFUNCTION(BlueprintCallable)
    static FString GetLoginStatus(int32 localUserNum);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetHostUsername(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetHostUniqueId(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool GetFriendsList(int32 localUserNum, TArray<FFriendInfo>& Players);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetFriendlyServerNameSanitized(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetFriendlyServerName(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool GetCurrentSessionState(FString& sessionState, FString& ID);
    
    UFUNCTION(BlueprintCallable)
    static bool FSDUpdateSessionInfo(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EFSDMissionStatus FSDMissionStatus(const FBlueprintSessionResult& Result);
    
    UFUNCTION(BlueprintCallable)
    static void FSDListen(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool FSDIsSessionValid(const FBlueprintSessionResult& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool FSDIsPrivateServer(const FBlueprintSessionResult& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool FSDIsPasswordRequired(const FBlueprintSessionResult& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool FSDIsModdedServer(const FBlueprintSessionResult& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool FSDIsModdedSandboxServer(const FBlueprintSessionResult& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool FSDIsFullServer(const FBlueprintSessionResult& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool FSDIsEliteDeepDive(const FBlueprintSessionResult& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool FSDIsClassLocked(const FBlueprintSessionResult& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool FSDHasHiddenModsNotInstalledOnClient(const FBlueprintSessionResult& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool FSDHasGameStarted(const FBlueprintSessionResult& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool FSDGetServerStartTime(const FBlueprintSessionResult& Result, FDateTime& StartTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString FSDGetServerNameSanitized(const FBlueprintSessionResult& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString FSDGetServerName(const FBlueprintSessionResult& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString FSDGetServerID(const FBlueprintSessionResult& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FString> FSDGetRequiredModsToDownload(const FBlueprintSessionResult& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString FSDGetRegion(const FBlueprintSessionResult& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<UPlayerCharacterID*> FSDGetPlayerClassIDs(const FBlueprintSessionResult& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<TSubclassOf<APlayerCharacter>> FSDGetPlayerClasses(const FBlueprintSessionResult& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FString> FSDGetOptionalModsInstalled(const FBlueprintSessionResult& Result, bool ExcludeVerifiedMods);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 FSDGetNumPlayers(const FBlueprintSessionResult& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FString> FSDGetModsInstalled(const FBlueprintSessionResult& Result, bool ExcludeVerifiedMods);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 FSDGetMissionSeed(const FBlueprintSessionResult& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString FSDGetMapName(const FBlueprintSessionResult& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString FSDGetHostUserID(const FBlueprintSessionResult& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 FSDGetGlobalMissionSeed(const FBlueprintSessionResult& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float FSDGetDistanceFloat(const FBlueprintSessionResult& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EServerDistance FSDGetDistance(const FBlueprintSessionResult& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UDifficultySetting* FSDGetDifficulty(const FBlueprintSessionResult& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString FSDGetBuildId(const FBlueprintSessionResult& Result);
    
    UFUNCTION(BlueprintCallable)
    static bool FSDCancelFindSessions(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool FindBestQuickJoinServer(UObject* WorldContextObject, UPARAM(Ref) TArray<FBlueprintSessionResult>& sessions, UDifficultySetting* Difficulty, UBiome* Biome, UMissionTemplate* MissionTemplate, FBlueprintSessionResult& OutResult);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool AllowLinkToExternalFeedback(UObject* WorldContextObject);
    
};

