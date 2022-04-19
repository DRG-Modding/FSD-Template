#pragma once
#include "CoreMinimal.h"
#include "MilestoneTier.generated.h"

USTRUCT(BlueprintType)
struct FMilestoneTier {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CompletionCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PerkPoints;
    
public:
    FSD_API FMilestoneTier();
};

