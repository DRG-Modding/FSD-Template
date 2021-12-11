#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RejoinFloat.generated.h"

USTRUCT(BlueprintType)
struct FRejoinFloat {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGuid ItemKey;
    
    UPROPERTY()
    FName ValueKey;
    
    UPROPERTY()
    float Value;
    
    FSD_API FRejoinFloat();
};

