#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DrinkSave.generated.h"

USTRUCT(BlueprintType)
struct FDrinkSave {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FGuid> UnlockedDrinks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HasUnlockedSpecial;
    
    FSD_API FDrinkSave();
};

