#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DrinkSave.generated.h"

USTRUCT(BlueprintType)
struct FDrinkSave {
    GENERATED_BODY()
public:
    UPROPERTY()
    TSet<FGuid> UnlockedDrinks;
    
    UPROPERTY()
    bool HasUnlockedSpecial;
    
    FSD_API FDrinkSave();
};

