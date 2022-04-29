#pragma once
#include "CoreMinimal.h"
#include "DamageCondition.h"
#include "ClipStatusDamageCondition.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UClipStatusDamageCondition : public UDamageCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BulletAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CountBulletsLeft;
    
public:
    UClipStatusDamageCondition();
};

