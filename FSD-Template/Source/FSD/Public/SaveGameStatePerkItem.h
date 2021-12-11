#pragma once
#include "CoreMinimal.h"
#include "SaveGameStatePerkItem.generated.h"

class UPerkAsset;

USTRUCT(BlueprintType)
struct FSaveGameStatePerkItem {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    uint8 Rank;
    
    UPROPERTY(Transient)
    UPerkAsset* Perk;
    
    FSD_API FSaveGameStatePerkItem();
};

