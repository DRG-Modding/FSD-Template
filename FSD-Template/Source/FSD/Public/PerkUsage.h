#pragma once
#include "CoreMinimal.h"
#include "PerkUsage.generated.h"

class UPerkAsset;

USTRUCT(BlueprintType)
struct FPerkUsage {
    GENERATED_BODY()
public:
    UPROPERTY()
    UPerkAsset* Perk;
    
    UPROPERTY()
    int32 UsedCount;
    
    FSD_API FPerkUsage();
};

