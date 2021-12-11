#pragma once
#include "CoreMinimal.h"
#include "SchematicItem.h"
#include "ResourceSchematicItem.generated.h"

class UResourceData;

UCLASS(EditInlineNew)
class UResourceSchematicItem : public USchematicItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 Credits;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UResourceData* Resource;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 ResourceAmount;
    
public:
    UResourceSchematicItem();
};

