#pragma once
#include "CoreMinimal.h"
#include "DeepDiveItem.h"
#include "DeepDiveSave.generated.h"

USTRUCT(BlueprintType)
struct FDeepDiveSave {
    GENERATED_BODY()
public:
    UPROPERTY()
    FDeepDiveItem NormalSave;
    
    UPROPERTY()
    FDeepDiveItem EliteSave;
    
    FSD_API FDeepDiveSave();
};

