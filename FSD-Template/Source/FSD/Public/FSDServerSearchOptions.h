#pragma once
#include "CoreMinimal.h"
#include "EGameType.h"
#include "ESteamServerJoinStatus.h"
#include "ESteamSearchRegion.h"
#include "FSDServerSearchOptions.generated.h"

class UDifficultySetting;

USTRUCT(BlueprintType)
struct FFSDServerSearchOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    ESteamServerJoinStatus JoinStatus;
    
    UPROPERTY(BlueprintReadWrite)
    ESteamSearchRegion SearchRegion;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<UDifficultySetting*> Difficulties;
    
    UPROPERTY(BlueprintReadWrite)
    bool DeepDive;
    
    UPROPERTY(BlueprintReadWrite)
    FString SearchString;
    
    UPROPERTY(BlueprintReadWrite)
    int32 MissionSeed;
    
    UPROPERTY(BlueprintReadWrite)
    int32 GlobalMissionSeed;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<EGameType> GameTypes;
    
    FSD_API FFSDServerSearchOptions();
};

