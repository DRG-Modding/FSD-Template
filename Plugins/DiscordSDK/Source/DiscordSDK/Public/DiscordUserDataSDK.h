#pragma once
#include "CoreMinimal.h"
#include "DiscordUserDataSDK.generated.h"

USTRUCT(BlueprintType)
struct FDiscordUserDataSDK {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Username;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString discriminator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString avatar;
    
    DISCORDSDK_API FDiscordUserDataSDK();
};

