#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PerkClaimEntry.generated.h"

USTRUCT(BlueprintType)
struct FPerkClaimEntry {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGuid PerkID;
    
    UPROPERTY()
    int32 currentRank;
    
    FSD_API FPerkClaimEntry();
};

