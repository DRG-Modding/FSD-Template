#pragma once
#include "CoreMinimal.h"
#include "EDiscordBiomeType.h"
#include "EDiscordMissionType.h"
#include "DiscordFSDRichPresence.generated.h"

USTRUCT(BlueprintType)
struct FDiscordFSDRichPresence {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FString State;
    
    UPROPERTY(BlueprintReadWrite)
    FString details;
    
    UPROPERTY(BlueprintReadWrite)
    FString matchSecret;
    
    UPROPERTY(BlueprintReadWrite)
    FString joinSecret;
    
    UPROPERTY(BlueprintReadWrite)
    FString partyId;
    
    UPROPERTY(BlueprintReadWrite)
    FString smallImageText;
    
    UPROPERTY(BlueprintReadWrite)
    FString LargeImageText;
    
    UPROPERTY(BlueprintReadWrite)
    int32 startTimestamp;
    
    UPROPERTY(BlueprintReadWrite)
    int32 partySize;
    
    UPROPERTY(BlueprintReadWrite)
    EDiscordBiomeType BiomeType;
    
    UPROPERTY(BlueprintReadWrite)
    EDiscordMissionType MissionType;
    
    UPROPERTY(BlueprintReadWrite)
    bool bIsPureSolo;
    
    FSD_API FDiscordFSDRichPresence();
};

