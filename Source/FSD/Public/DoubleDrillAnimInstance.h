#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "DoubleDrillAnimInstance.generated.h"

class ADoubleDrillItem;

UCLASS(Blueprintable, NonTransient)
class UDoubleDrillAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float DrillSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsMining;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsGunslinging;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ADoubleDrillItem* Item;
    
public:
    UDoubleDrillAnimInstance();
};

