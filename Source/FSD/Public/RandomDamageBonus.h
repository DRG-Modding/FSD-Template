#pragma once
#include "CoreMinimal.h"
#include "DamageBonusBase.h"
#include "RandRange.h"
#include "RandomDamageBonus.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class URandomDamageBonus : public UDamageBonusBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRandRange RandomDamageRange;
    
public:
    URandomDamageBonus();
};

