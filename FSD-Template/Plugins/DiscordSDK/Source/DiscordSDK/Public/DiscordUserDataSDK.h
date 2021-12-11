#pragma once
#include "CoreMinimal.h"
#include "DiscordUserDataSDK.generated.h"

USTRUCT(BlueprintType)
struct FDiscordUserDataSDK {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FString UserId;
    
    UPROPERTY(BlueprintReadOnly)
    FString Username;
    
    UPROPERTY(BlueprintReadOnly)
    FString discriminator;
    
    UPROPERTY(BlueprintReadOnly)
    FString avatar;
    
    DISCORDSDK_API FDiscordUserDataSDK();
};

