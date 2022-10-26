#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "DrillAnimInstance.generated.h"

class ARockCrackerDrill;

UCLASS(Blueprintable, NonTransient)
class UDrillAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ARockCrackerDrill* Drill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float BuildProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool Drilling;
    
    UDrillAnimInstance();
};

