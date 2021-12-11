#pragma once
#include "CoreMinimal.h"
#include "DamageCondition.h"
#include "LockCountDamageCondition.generated.h"

UCLASS(EditInlineNew)
class ULockCountDamageCondition : public UDamageCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    int32 MinLockCount;
    
    UPROPERTY(EditAnywhere)
    bool UseTotalLockCount;
    
public:
    ULockCountDamageCondition();
};

