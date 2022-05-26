#pragma once
#include "CoreMinimal.h"
#include "DamageCondition.h"
#include "DistanceToTargetDamageCondition.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UDistanceToTargetDamageCondition : public UDamageCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool TestMaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumDistance;
    
public:
    UDistanceToTargetDamageCondition();
};

