#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RejoinInt.generated.h"

USTRUCT(BlueprintType)
struct FRejoinInt {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGuid ItemKey;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FName ValueKey;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    FSD_API FRejoinInt();
};

