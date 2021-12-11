#pragma once
#include "CoreMinimal.h"
#include "SchematicItem.h"
#include "SkinSchematicItem.generated.h"

class UItemSkin;
class UItemID;

UCLASS(EditInlineNew)
class FSD_API USkinSchematicItem : public USchematicItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UItemID* ItemID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UItemSkin* Skin;
    
public:
    USkinSchematicItem();
};

