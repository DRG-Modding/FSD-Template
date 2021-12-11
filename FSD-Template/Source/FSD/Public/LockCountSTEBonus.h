#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "DamageBonusBase.h"
#include "LockCountSTEBonus.generated.h"

class UStatusEffect;

UCLASS(EditInlineNew)
class ULockCountSTEBonus : public UDamageBonusBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 MinLockCount;
    
    UPROPERTY(EditAnywhere)
    bool UseTotalLockCount;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UStatusEffect> StatusEffect;
    
    ULockCountSTEBonus();
};

