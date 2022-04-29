#pragma once
#include "CoreMinimal.h"
#include "SchematicItem.h"
#include "ResourceSchematicItem.generated.h"

class UResourceData;

UCLASS(Blueprintable, EditInlineNew)
class UResourceSchematicItem : public USchematicItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Credits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UResourceData* Resource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ResourceAmount;
    
public:
    UResourceSchematicItem();
};

