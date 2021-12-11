#pragma once
#include "CoreMinimal.h"
#include "GameActivitySubTask.generated.h"

USTRUCT(BlueprintType)
struct FGameActivitySubTask {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString SubActivityId;
    
    FSD_API FGameActivitySubTask();
};

