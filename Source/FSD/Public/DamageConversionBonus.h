#pragma once
#include "CoreMinimal.h"
#include "DamageBonusBase.h"
#include "DamageConversionBonus.generated.h"

class UDamageClass;

UCLASS(Blueprintable, EditInlineNew)
class UDamageConversionBonus : public UDamageBonusBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDamageClass* DamageClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ConversionPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DamageIsAdded;
    
public:
    UDamageConversionBonus();
};

