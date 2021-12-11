#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RejoinInt.generated.h"

USTRUCT(BlueprintType)
struct FRejoinInt {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGuid ItemKey;
    
    UPROPERTY()
    FName ValueKey;
    
    UPROPERTY()
    int32 Value;
    
    FSD_API FRejoinInt();
};

