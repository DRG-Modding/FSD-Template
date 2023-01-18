#pragma once
#include "CoreMinimal.h"
#include "DamageBonusBase.h"
#include "Templates/SubclassOf.h"
#include "StatusDamageBonus.generated.h"

class UDamageClass;
class UStatusEffect;

UCLASS(Blueprintable, EditInlineNew)
class UStatusDamageBonus : public UDamageBonusBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UStatusEffect>> StatusEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Bonus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDamageClass* DamageClass;
    
public:
    UStatusDamageBonus();
};

