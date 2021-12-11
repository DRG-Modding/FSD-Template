#pragma once
#include "CoreMinimal.h"
#include "EnemyAnimInstance.h"
#include "ShootingPlantAnimInstance.generated.h"

class AActor;

UCLASS(NonTransient)
class UShootingPlantAnimInstance : public UEnemyAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AActor* Target;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Yaw;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Pitch;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float YawSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float PitchSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsVisible;
    
public:
    UShootingPlantAnimInstance();
};

