#pragma once
#include "CoreMinimal.h"
#include "DamageBonusBase.h"
#include "ETargetStateDamageBonusType.h"
#include "TargetStateDamageBonus.generated.h"

class UDamageClass;

UCLASS(Blueprintable, EditInlineNew)
class UTargetStateDamageBonus : public UDamageBonusBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETargetStateDamageBonusType TargetState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Bonus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDamageClass* DamageClass;
    
public:
    UTargetStateDamageBonus();
};

