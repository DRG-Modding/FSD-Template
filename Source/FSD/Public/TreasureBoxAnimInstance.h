#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "TreasureBoxAnimInstance.generated.h"

UCLASS(NonTransient)
class UTreasureBoxAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    float BuildProgress;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    float PhysicsAlpha;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool IsTreasureAvailable;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool IsLeftInserted;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool IsRightInserted;
    
public:
    UTreasureBoxAnimInstance();
};

