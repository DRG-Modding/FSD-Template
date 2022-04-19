#pragma once
#include "CoreMinimal.h"
#include "ESteamServerJoinStatus.h"
#include "EGameType.h"
#include "ESteamSearchRegion.h"
#include "FSDServerSearchOptions.generated.h"

class UDifficultySetting;

USTRUCT(BlueprintType)
struct FFSDServerSearchOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    ESteamServerJoinStatus JoinStatus;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    ESteamSearchRegion SearchRegion;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<UDifficultySetting*> Difficulties;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool DeepDive;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString SearchString;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 MissionSeed;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 GlobalMissionSeed;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<EGameType> GameTypes;
    
    FSD_API FFSDServerSearchOptions();
};

