#pragma once
#include "CoreMinimal.h"
#include "DamageBonusBase.h"
#include "GameplayTagContainer.h"
#include "TargetSpecificDamageBonus.generated.h"

UCLASS(EditInlineNew)
class UTargetSpecificDamageBonus : public UDamageBonusBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float Bonus;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagQuery tagQuery;
    
    UPROPERTY(EditAnywhere)
    FName Key;
    
public:
    UTargetSpecificDamageBonus();
};

