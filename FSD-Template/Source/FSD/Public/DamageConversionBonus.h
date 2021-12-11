#pragma once
#include "CoreMinimal.h"
#include "DamageBonusBase.h"
#include "DamageConversionBonus.generated.h"

class UDamageClass;

UCLASS(EditInlineNew)
class UDamageConversionBonus : public UDamageBonusBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDamageClass* DamageClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ConversionPercentage;
    
    UPROPERTY(EditAnywhere)
    bool DamageIsAdded;
    
public:
    UDamageConversionBonus();
};

