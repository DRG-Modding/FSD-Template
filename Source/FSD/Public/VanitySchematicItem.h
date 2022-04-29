#pragma once
#include "CoreMinimal.h"
#include "SchematicItem.h"
#include "VanitySchematicItem.generated.h"

class UVanityItem;

UCLASS(Blueprintable, EditInlineNew)
class UVanitySchematicItem : public USchematicItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVanityItem* Item;
    
public:
    UVanitySchematicItem();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UVanityItem* GetVanityItem();
    
};

