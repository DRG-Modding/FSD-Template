#pragma once
#include "CoreMinimal.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "FSDMatchmakingCallbackProxy.generated.h"

class UMissionTemplate;
class UObject;
class UBiome;
class APlayerController;
class UFSDMatchmakingCallbackProxy;
class UDifficultySetting;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFSDMatchmakingCallbackProxyOnCancelled);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFSDMatchmakingCallbackProxyOnSuccess);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFSDMatchmakingCallbackProxyOnFailure);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FFSDMatchmakingCallbackProxyFailDelegateHandle, const FString&, Description, int32, Status);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FFSDMatchmakingCallbackProxyFailDelegate, const FString&, Description, int32, Status);

UCLASS(MinimalAPI)
class UFSDMatchmakingCallbackProxy : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FFSDMatchmakingCallbackProxyOnSuccess OnSuccess;
    
    UPROPERTY(BlueprintAssignable)
    FFSDMatchmakingCallbackProxyOnFailure OnFailure;
    
    UPROPERTY(BlueprintAssignable)
    FFSDMatchmakingCallbackProxyOnCancelled OnCancelled;
    
private:
    UPROPERTY(Transient)
    FFSDMatchmakingCallbackProxyFailDelegateHandle FailDelegateHandle;
    
    UPROPERTY(Transient)
    UMissionTemplate* mission;
    
    UPROPERTY(Transient)
    UBiome* Biome;
    
    UPROPERTY(Transient)
    UDifficultySetting* Difficulty;
    
public:
    UFUNCTION(BlueprintCallable)
    static UFSDMatchmakingCallbackProxy* FSDMatchmaking(UObject* WorldContextObject, APlayerController* PlayerController, const FFSDMatchmakingCallbackProxyFailDelegate& FailDelegate, UDifficultySetting* DesiredDifficulty, UBiome* desiredBiome, UMissionTemplate* desiredMission);
    
    UFUNCTION(BlueprintCallable)
    static void CancelMatchmaking();
    
    UFSDMatchmakingCallbackProxy();
};

