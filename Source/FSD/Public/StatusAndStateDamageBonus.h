#pragma once
#include "CoreMinimal.h"
#include "DamageBonusBase.h"
#include "ETargetStateDamageBonusType.h"
#include "Templates/SubclassOf.h"
#include "StatusAndStateDamageBonus.generated.h"

class UDamageClass;
class UStatusEffect;

UCLASS(Blueprintable, EditInlineNew)
class UStatusAndStateDamageBonus : public UDamageBonusBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UStatusEffect>> StatusEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ETargetStateDamageBonusType> TargetStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Bonus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDamageClass* DamageClass;
    
public:
    UStatusAndStateDamageBonus();
};

