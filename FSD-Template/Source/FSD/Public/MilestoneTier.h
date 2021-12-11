#pragma once
#include "CoreMinimal.h"
#include "MilestoneTier.generated.h"

USTRUCT(BlueprintType)
struct FMilestoneTier {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CompletionCount;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 PerkPoints;
    
public:
    FSD_API FMilestoneTier();
};

