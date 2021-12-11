#pragma once
#include "CoreMinimal.h"
#include "MissionShoutQueueItem.generated.h"

class USoundBase;

USTRUCT(BlueprintType)
struct FMissionShoutQueueItem {
    GENERATED_BODY()
public:
    UPROPERTY()
    TSoftObjectPtr<USoundBase> AudioPtr;
    
    UPROPERTY()
    FText Text;
    
    UPROPERTY()
    USoundBase* LoadedAudio;
    
    FSD_API FMissionShoutQueueItem();
};

