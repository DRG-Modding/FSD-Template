#pragma once
#include "CoreMinimal.h"
#include "DamageBonusBase.h"
#include "CarryElementalStatus.generated.h"

class UDamageClass;

UCLASS(EditInlineNew)
class UCarryElementalStatus : public UDamageBonusBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CarryBonusAmount;
    
    UPROPERTY(Transient)
    UDamageClass* CarriedClass;
    
public:
    UCarryElementalStatus();
};

