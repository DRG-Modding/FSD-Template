#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "FuelCannisterItemAnimInstance.generated.h"

UCLASS(NonTransient)
class UFuelCannisterItemAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool IsOnGround;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool IsFull;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool IsShooting;
    
public:
    UFuelCannisterItemAnimInstance();
};

