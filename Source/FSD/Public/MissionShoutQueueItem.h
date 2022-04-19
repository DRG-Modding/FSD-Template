#pragma once
#include "CoreMinimal.h"
#include "MissionShoutQueueItem.generated.h"

class USoundBase;

USTRUCT(BlueprintType)
struct FMissionShoutQueueItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundBase> AudioPtr;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FText Text;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    USoundBase* LoadedAudio;
    
    FSD_API FMissionShoutQueueItem();
};

