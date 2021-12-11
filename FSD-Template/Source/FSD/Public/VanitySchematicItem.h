#pragma once
#include "CoreMinimal.h"
#include "SchematicItem.h"
#include "VanitySchematicItem.generated.h"

class UVanityItem;

UCLASS(EditInlineNew)
class UVanitySchematicItem : public USchematicItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UVanityItem* Item;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UVanityItem* GetVanityItem();
    
    UVanitySchematicItem();
};

