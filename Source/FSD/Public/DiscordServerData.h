#pragma once
#include "CoreMinimal.h"
#include "DiscordServerData.generated.h"

USTRUCT(BlueprintType)
struct FDiscordServerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 presenceCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 memberCount;
    
    FSD_API FDiscordServerData();
};

