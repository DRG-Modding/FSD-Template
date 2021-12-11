#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "ConvertedRobotTurretAnimInstance.generated.h"

UCLASS(NonTransient)
class UConvertedRobotTurretAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool ReplaceBurstAttack;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool IsFiringGrenades;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool IsDoingSpecialAttack;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool ShouldFireBullets;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool StopFiringBullets;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool ShouldCannonDeploy;
    
public:
    UConvertedRobotTurretAnimInstance();
};

