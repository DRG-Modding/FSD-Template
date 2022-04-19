#pragma once
#include "CoreMinimal.h"
#include "DamageCondition.h"
#include "UObject/NoExportTypes.h"
#include "MaterialDamageMultiplierCondition.generated.h"

UCLASS(EditInlineNew)
class UMaterialDamageMultiplierCondition : public UDamageCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval MultiplierRangeRequired;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Invert;
    
public:
    UMaterialDamageMultiplierCondition();
};

