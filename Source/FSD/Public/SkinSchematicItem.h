#pragma once
#include "CoreMinimal.h"
#include "SchematicItem.h"
#include "SkinSchematicItem.generated.h"

class UItemID;
class UItemSkin;

UCLASS(Blueprintable, EditInlineNew)
class FSD_API USkinSchematicItem : public USchematicItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemID* ItemID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemSkin* Skin;
    
public:
    USkinSchematicItem();
};

