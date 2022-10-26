#pragma once
#include "CoreMinimal.h"
#include "ProgressShout.generated.h"

class UDialogDataAsset;

USTRUCT(BlueprintType)
struct FProgressShout {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProgressStamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* Shout;
    
    FSD_API FProgressShout();
};

