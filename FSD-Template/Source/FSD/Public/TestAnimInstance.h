#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "TestAnimInstanceProxy.h"
#include "TestAnimInstance.generated.h"

UCLASS(NonTransient)
class UTestAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient)
    FTestAnimInstanceProxy AnimInstanceProxy;
    
    UPROPERTY(EditAnywhere)
    float WalkCycleSpeed;
    
    UPROPERTY(EditAnywhere)
    float StartMovingSpeed;
    
    UPROPERTY(EditAnywhere)
    float StopMovingSpeed;
    
    UPROPERTY(EditAnywhere)
    float WalkCycleMinRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    float MeshScale;
    
    UTestAnimInstance();
};

