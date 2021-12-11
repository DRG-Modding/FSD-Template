#pragma once
#include "CoreMinimal.h"
#include "DeepDiveRewardItem.generated.h"

class USchematic;

USTRUCT(BlueprintType)
struct FDeepDiveRewardItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient)
    USchematic* Schematic;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    int32 Stage;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool WasAlreadyGiven;
    
    FSD_API FDeepDiveRewardItem();
};

