#pragma once
#include "CoreMinimal.h"
#include "SaveGameStatePerkItem.generated.h"

class UPerkAsset;

USTRUCT(BlueprintType)
struct FSaveGameStatePerkItem {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient)
    uint8 Rank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPerkAsset* Perk;
    
    FSD_API FSaveGameStatePerkItem();
};

