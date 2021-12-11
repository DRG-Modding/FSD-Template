#pragma once
#include "CoreMinimal.h"
#include "DiscordServerInviteData.generated.h"

USTRUCT(BlueprintType)
struct FDiscordServerInviteData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FString code;
    
    UPROPERTY(BlueprintReadWrite)
    FString serverID;
    
    UPROPERTY(BlueprintReadWrite)
    FString serverDescription;
    
    UPROPERTY(BlueprintReadWrite)
    FString serverName;
    
    UPROPERTY(BlueprintReadWrite)
    int32 presenceCount;
    
    UPROPERTY(BlueprintReadWrite)
    int32 memberCount;
    
    UPROPERTY(BlueprintReadWrite)
    FString iconKey;
    
    UPROPERTY(BlueprintReadWrite)
    FString bannerKey;
    
    UPROPERTY(BlueprintReadWrite)
    FString splashKey;
    
    FSD_API FDiscordServerInviteData();
};

