#pragma once
#include "CoreMinimal.h"
#include "DeepDiveTesterItem.generated.h"

class UMissionTemplate;
class UMissionWarning;
class UMissionMutator;

USTRUCT(BlueprintType)
struct FDeepDiveTesterItem {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UMissionTemplate* mission;
    
    UPROPERTY(EditAnywhere)
    UMissionMutator* Mutator;
    
    UPROPERTY(EditAnywhere)
    UMissionWarning* Warning;
    
    FSD_API FDeepDiveTesterItem();
};

