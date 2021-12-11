#pragma once
#include "CoreMinimal.h"
#include "DamageCondition.h"
#include "ClipStatusDamageCondition.generated.h"

UCLASS(EditInlineNew)
class UClipStatusDamageCondition : public UDamageCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    int32 BulletAmount;
    
    UPROPERTY(EditAnywhere)
    bool CountBulletsLeft;
    
public:
    UClipStatusDamageCondition();
};

