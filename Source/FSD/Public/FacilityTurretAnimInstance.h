#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EnemyAnimInstance.h"
#include "FacilityTurretAnimInstance.generated.h"

UCLASS(NonTransient)
class UFacilityTurretAnimInstance : public UEnemyAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRotator AimRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsEngaged;
    
public:
    UFacilityTurretAnimInstance();
};

