#pragma once
#include "CoreMinimal.h"
#include "EnemyAnimInstance.h"
#include "ShootingPlantAnimInstance.generated.h"

class AActor;

UCLASS(Blueprintable, NonTransient)
class UShootingPlantAnimInstance : public UEnemyAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Target;
    
    UPROPERTY(EditAnywhere)
    float Yaw;
    
    UPROPERTY(EditAnywhere)
    float Pitch;
    
    UPROPERTY(EditAnywhere)
    float YawSpeed;
    
    UPROPERTY(EditAnywhere)
    float PitchSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsVisible;
    
public:
    UShootingPlantAnimInstance();
};

