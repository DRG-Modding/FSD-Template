#pragma once
#include "CoreMinimal.h"
#include "SchematicItem.h"
#include "DrinkableSchematicItem.generated.h"

class UDrinkableDataAsset;

UCLASS(EditInlineNew)
class UDrinkableSchematicItem : public USchematicItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDrinkableDataAsset* Drinkable;
    
public:
    UDrinkableSchematicItem();
};

