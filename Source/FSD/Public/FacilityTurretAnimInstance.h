#pragma once
#include "CoreMinimal.h"
#include "EnemyAnimInstance.h"
#include "UObject/NoExportTypes.h"
#include "FacilityTurretAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
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

