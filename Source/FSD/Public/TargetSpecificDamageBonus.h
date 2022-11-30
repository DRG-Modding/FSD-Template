#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "DamageBonusBase.h"
#include "TargetSpecificDamageBonus.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UTargetSpecificDamageBonus : public UDamageBonusBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Bonus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery tagQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
public:
    UTargetSpecificDamageBonus();
};

