#pragma once
#include "CoreMinimal.h"
#include "TestAnimInstanceProxy.h"
#include "Animation/AnimInstance.h"
#include "TestAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class UTestAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTestAnimInstanceProxy AnimInstanceProxy;
    
    UPROPERTY(EditAnywhere)
    float WalkCycleSpeed;
    
    UPROPERTY(EditAnywhere)
    float StartMovingSpeed;
    
    UPROPERTY(EditAnywhere)
    float StopMovingSpeed;
    
    UPROPERTY(EditAnywhere)
    float WalkCycleMinRate;
    
    UPROPERTY(EditAnywhere, Transient)
    float MeshScale;
    
    UTestAnimInstance();
};

