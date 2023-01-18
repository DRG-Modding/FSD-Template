#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameFunctionLibrary.generated.h"

class ADeepCSGWorld;
class AFSDGameMode;
class AFSDGameModeSpaceRig;
class AFSDGameState;
class APlayerCharacter;
class IMissionModeManager;
class UMissionModeManager;
class UAsyncManager;
class UAudioComponent;
class UCampaignManager;
class UFSDGameInstance;
class UFSDSaveGame;
class UGameData;
class UGoogleAnalyticsWrapper;
class UObject;
class USoundBase;
class UWindowManager;
class UWindowWidget;

UCLASS(Blueprintable)
class FSD_API UGameFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGameFunctionLibrary();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void SpawnOrUpdateAudio2D(UObject* WorldContext, UPARAM(Ref) UAudioComponent*& AudioComponent, USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier, FName FloatParamName, float FloatParam);
    
    UFUNCTION(BlueprintCallable)
    static void SetUsePushToTalk(bool Enable);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetGlobalGravityZ(UObject* WorldContextObject, float GravityZ);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetGlobalGravityScale(UObject* WorldContextObject, float GravityScale);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsWorldTickEnabled(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void IsTearingDown(UObject* caller, bool& NewIsTearingDown);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsPlayingOffline(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsPlayInEditor(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UWindowManager* GetWindowManager(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetUsePushToTalk();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UWindowWidget* GetTopWindow(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetProjectVersion();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static int32 GetNumPlayers(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static int32 GetNumAdditionalPlayers(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetMajorProjectVersion();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static APlayerCharacter* GetLocalPlayerCharacter(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UGoogleAnalyticsWrapper* GetGoogleAnalyticsWrapper(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static float GetGlobalGravityZ(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AFSDGameModeSpaceRig* GetFSDSRGameMode(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UFSDSaveGame* GetFSDSaveGame(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AFSDGameState* GetFSDGameState(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AFSDGameMode* GetFSDGameMode(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UFSDGameInstance* GetFSDGameInstance(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UGameData* GetFSDGameData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TScriptInterface<IMissionModeManager> GetDeepDiveManager(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ADeepCSGWorld* GetCSGWorld(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetChangelist();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UCampaignManager* GetCampaingManager(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UAsyncManager* GetAsyncManager(UObject* WorldContextObject);
    
};

