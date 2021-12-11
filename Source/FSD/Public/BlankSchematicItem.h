#pragma once
#include "CoreMinimal.h"
#include "SchematicItem.h"
#include "BlankSchematicItem.generated.h"

class UTexture2D;

UCLASS(EditInlineNew)
class UBlankSchematicItem : public USchematicItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FText Title;
    
    UPROPERTY(EditAnywhere)
    FText Description;
    
    UPROPERTY(EditAnywhere)
    UTexture2D* Icon;
    
public:
    UBlankSchematicItem();
};

