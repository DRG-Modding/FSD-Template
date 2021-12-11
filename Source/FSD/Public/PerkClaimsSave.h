#pragma once
#include "CoreMinimal.h"
#include "PerkClaimEntry.h"
#include "PerkClaimsSave.generated.h"

USTRUCT(BlueprintType)
struct FPerkClaimsSave {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TArray<FPerkClaimEntry> PerkEntries;
    
    UPROPERTY()
    bool HasResetPerks2;
    
public:
    FSD_API FPerkClaimsSave();
};

