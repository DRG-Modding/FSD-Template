#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RejoinFloat.generated.h"

USTRUCT(BlueprintType)
struct FRejoinFloat {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid ItemKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ValueKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    FSD_API FRejoinFloat();
};

