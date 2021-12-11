#pragma once
#include "CoreMinimal.h"
#include "DeepDiveTemplateItem.generated.h"

class UMissionTemplate;
class UMissionDuration;

USTRUCT(BlueprintType)
struct FDeepDiveTemplateItem {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UMissionTemplate* mission;
    
    UPROPERTY(EditAnywhere)
    TArray<UMissionDuration*> AllowedDurations;
    
    FSD_API FDeepDiveTemplateItem();
};

