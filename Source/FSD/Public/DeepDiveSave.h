#pragma once
#include "CoreMinimal.h"
#include "DeepDiveItem.h"
#include "DeepDiveSave.generated.h"

USTRUCT(BlueprintType)
struct FDeepDiveSave {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FDeepDiveItem NormalSave;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FDeepDiveItem EliteSave;
    
    FSD_API FDeepDiveSave();
};

