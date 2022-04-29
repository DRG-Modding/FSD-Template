#pragma once
#include "CoreMinimal.h"
#include "DamageBonusBase.h"
#include "CarryElementalStatus.generated.h"

class UDamageClass;

UCLASS(Blueprintable, EditInlineNew)
class UCarryElementalStatus : public UDamageBonusBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float CarryBonusAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDamageClass* CarriedClass;
    
public:
    UCarryElementalStatus();
};

