#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "FindSessionsCallbackProxy.h"
#include "EDisconnectReason.h"
#include "EFSDMissionStatus.h"
#include "EFSDNATType.h"
#include "EMissionStructure.h"
#include "EServerDistance.h"
#include "EServerSortOrder.h"
#include "FriendInfo.h"
#include "Templates/SubclassOf.h"
#include "SessionHandling.generated.h"

class APlayerCharacter;
class UBiome;
class UDifficultySetting;
class UFSDGameInstance;
class UMissionTemplate;
class UObject;
class UPlayerCharacterID;

UCLASS(Blueprintable)
class USessionHandling : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USessionHandling();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void StopVoice(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void StartVoice(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool StartSearchForFriends(int32 localUserNum, UFSDGameInstance* GameInstance);
    
    UFUNCTION(BlueprintCallable)
    static bool StartSearchForBlockedUsers(int32 localUserNum);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void StartCheckForInstalledDLC(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SortServerList(UObject* WorldContextObject, EServerSortOrder order, bool Reverse, bool sortByFriends, UPARAM(Ref) TArray<FBlueprintSessionResult>& servers);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ShowStoreUI(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ShowInviteUI(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void JoinOfficialXboxClub(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsVoiceChatting();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsInActiveSession();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDisconnectReasonAKick(EDisconnectReason reason);
    
    UFUNCTION(BlueprintCallable)
    static FString GetVoiceStatus();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FText GetSessionJoinError(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool GetOnlinePlayerName(int32 localUserNum, FString& Name);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static EFSDNATType GetNATType(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EMissionStructure GetMissionStructure(const FBlueprintSessionResult& Result);
    
    UFUNCTION(BlueprintCallable)
    static FString GetLoginStatus(int32 localUserNum);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FString GetHostUsername(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FString GetHostUniqueId(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool GetFriendsList(int32 localUserNum, TArray<FFriendInfo>& Players);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FString GetFriendlyServerNameSanitized(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FString GetFriendlyServerName(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool GetCurrentSessionState(FString& sessionState, FString& ID);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool FSDUpdateSessionInfo(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EFSDMissionStatus FSDMissionStatus(const FBlueprintSessionResult& Result);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
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
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool FSDCancelFindSessions(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool FindBestQuickJoinServer(UObject* WorldContextObject, UPARAM(Ref) TArray<FBlueprintSessionResult>& sessions, UDifficultySetting* Difficulty, UBiome* Biome, UMissionTemplate* MissionTemplate, FBlueprintSessionResult& OutResult);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool AllowLinkToExternalFeedback(UObject* WorldContextObject);
    
};

