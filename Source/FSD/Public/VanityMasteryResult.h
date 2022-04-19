#pragma once
#include "CoreMinimal.h"
#include "VanityMasterySave.h"
#include "VanityMasteryResult.generated.h"

USTRUCT(BlueprintType)
struct FVanityMasteryResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVanityMasterySave Previous;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVanityMasterySave Current;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FashionitesRewarded;
    
    FSD_API FVanityMasteryResult();
};

