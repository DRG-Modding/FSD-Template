#pragma once
#include "CoreMinimal.h"
#include "WatchedTutorial.generated.h"

USTRUCT(BlueprintType)
struct FWatchedTutorial {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString TutorialName;
    
    UPROPERTY()
    int32 count;
    
    FSD_API FWatchedTutorial();
};

