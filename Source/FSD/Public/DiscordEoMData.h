#pragma once
#include "CoreMinimal.h"
#include "DiscordEoMData.generated.h"

USTRUCT(BlueprintType)
struct FDiscordEoMData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString nick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    FSD_API FDiscordEoMData();
};

