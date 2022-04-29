#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "TreasureBoxAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class UTreasureBoxAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, Transient)
    float BuildProgress;
    
    UPROPERTY(EditAnywhere, Transient)
    float PhysicsAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsTreasureAvailable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsLeftInserted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsRightInserted;
    
public:
    UTreasureBoxAnimInstance();
};

