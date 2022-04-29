#pragma once
#include "CoreMinimal.h"
#include "CombinedUpgrade.h"
#include "OverclockUpgrade.generated.h"

class USchematicCategory;

UCLASS(Blueprintable, EditInlineNew)
class UOverclockUpgrade : public UCombinedUpgrade {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USchematicCategory* SchematicCategory;
    
public:
    UOverclockUpgrade();
};

