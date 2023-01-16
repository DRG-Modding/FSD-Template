#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DamageCondition.h"
#include "MaterialDamageMultiplierCondition.generated.h"

UCLASS(Blueprintable, EditInlineNew)
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

