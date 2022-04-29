#pragma once
#include "CoreMinimal.h"
#include "SpiderAnimInstance.h"
#include "UObject/NoExportTypes.h"
#include "PatrolBotAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class UPatrolBotAnimInstance : public USpiderAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRotator TurretRotation;
    
    UPROPERTY(EditAnywhere, Transient)
    float Tilt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool Rolling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool Disabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool FlyingDisable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRotator WheelRotation;
    
    UPROPERTY(EditAnywhere, Transient)
    float CurrentTilt;
    
    UPROPERTY(EditAnywhere)
    float TiltSpeed;
    
    UPROPERTY(EditAnywhere)
    float WheelSpeedModifier;
    
public:
    UPatrolBotAnimInstance();
};

