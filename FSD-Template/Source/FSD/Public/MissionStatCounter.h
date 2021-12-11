#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MissionStatCounter.generated.h"

USTRUCT(BlueprintType)
struct FMissionStatCounter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FGuid PlayerClassID;
    
    UPROPERTY(BlueprintReadOnly)
    FGuid MissionStatID;
    
    UPROPERTY(BlueprintReadOnly)
    float Value;
    
    FSD_API FMissionStatCounter();
};

