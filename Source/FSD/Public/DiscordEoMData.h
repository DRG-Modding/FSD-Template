#pragma once
#include "CoreMinimal.h"
#include "DiscordEoMData.generated.h"

USTRUCT(BlueprintType)
struct FDiscordEoMData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FString nick;
    
    UPROPERTY(BlueprintReadOnly)
    FString UserId;
    
    FSD_API FDiscordEoMData();
};

