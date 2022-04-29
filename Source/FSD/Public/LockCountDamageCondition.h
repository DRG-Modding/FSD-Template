#pragma once
#include "CoreMinimal.h"
#include "DamageCondition.h"
#include "LockCountDamageCondition.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ULockCountDamageCondition : public UDamageCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinLockCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseTotalLockCount;
    
public:
    ULockCountDamageCondition();
};

