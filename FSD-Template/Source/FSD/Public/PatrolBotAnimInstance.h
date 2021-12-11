#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SpiderAnimInstance.h"
#include "PatrolBotAnimInstance.generated.h"

UCLASS(NonTransient)
class UPatrolBotAnimInstance : public USpiderAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    FRotator TurretRotation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    float Tilt;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool Rolling;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool Disabled;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool FlyingDisable;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FRotator WheelRotation;
    
    UPROPERTY(Transient)
    float CurrentTilt;
    
    UPROPERTY(EditAnywhere)
    float TiltSpeed;
    
    UPROPERTY(EditAnywhere)
    float WheelSpeedModifier;
    
public:
    UPatrolBotAnimInstance();
};

