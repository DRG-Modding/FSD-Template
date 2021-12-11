#pragma once
#include "CoreMinimal.h"
#include "DamageBonusBase.h"
#include "BreakIceBonus.generated.h"

UCLASS(EditInlineNew)
class UBreakIceBonus : public UDamageBonusBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float DeFrostAmount;
    
public:
    UBreakIceBonus();
};

