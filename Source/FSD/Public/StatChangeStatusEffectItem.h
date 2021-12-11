#pragma once
#include "CoreMinimal.h"
#include "StatusEffectItem.h"
#include "StatChangeStatusEffectItem.generated.h"

class UPawnStat;

UCLASS(EditInlineNew)
class UStatChangeStatusEffectItem : public UStatusEffectItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UPawnStat* Stat;
    
    UPROPERTY(EditAnywhere)
    float StatChange;
    
    UPROPERTY(EditAnywhere)
    bool AffectedByResistances;
    
public:
    UStatChangeStatusEffectItem();
};

