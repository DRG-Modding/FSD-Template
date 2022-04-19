#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CraftingCost.h"
#include "CraftingCostLibrary.generated.h"

UCLASS(BlueprintType)
class FSD_API UCraftingCostLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UCraftingCostLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FCraftingCost ConvertResourcesToFashionite(TArray<FCraftingCost> InResources);
    
};

