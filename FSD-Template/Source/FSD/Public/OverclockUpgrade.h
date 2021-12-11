#pragma once
#include "CoreMinimal.h"
#include "CombinedUpgrade.h"
#include "OverclockUpgrade.generated.h"

class USchematicCategory;

UCLASS(EditInlineNew)
class UOverclockUpgrade : public UCombinedUpgrade {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    USchematicCategory* SchematicCategory;
    
public:
    UOverclockUpgrade();
};

