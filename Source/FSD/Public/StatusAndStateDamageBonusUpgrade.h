#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ItemUpgrade.h"
#include "ETargetStateDamageBonusType.h"
#include "StatusAndStateDamageBonusUpgrade.generated.h"

class UStatusEffect;
class UDamageClass;

UCLASS(EditInlineNew, MinimalAPI)
class UStatusAndStateDamageBonusUpgrade : public UItemUpgrade {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TArray<TSubclassOf<UStatusEffect>> StatusEffects;
    
    UPROPERTY(EditAnywhere)
    TArray<ETargetStateDamageBonusType> TargetStates;
    
    UPROPERTY(EditAnywhere)
    float Bonus;
    
    UPROPERTY(EditAnywhere)
    UDamageClass* DamageClass;
    
public:
    UStatusAndStateDamageBonusUpgrade();
};

