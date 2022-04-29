#pragma once
#include "CoreMinimal.h"
#include "EnemyAnimInstance.h"
#include "JellyFishAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class UJellyFishAnimInstance : public UEnemyAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, Transient)
    float HorizontalAngle;
    
    UPROPERTY(EditAnywhere, Transient)
    float VerticalSpeed;
    
public:
    UJellyFishAnimInstance();
};

