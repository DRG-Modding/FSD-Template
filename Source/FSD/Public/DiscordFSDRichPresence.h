#pragma once
#include "CoreMinimal.h"
#include "EDiscordBiomeType.h"
#include "EDiscordMissionType.h"
#include "DiscordFSDRichPresence.generated.h"

USTRUCT(BlueprintType)
struct FDiscordFSDRichPresence {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString State;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString details;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString matchSecret;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString joinSecret;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString partyId;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString smallImageText;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString LargeImageText;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 startTimestamp;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 partySize;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    EDiscordBiomeType BiomeType;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    EDiscordMissionType MissionType;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bIsPureSolo;
    
    FSD_API FDiscordFSDRichPresence();
};

