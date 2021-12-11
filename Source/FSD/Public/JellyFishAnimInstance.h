#pragma once
#include "CoreMinimal.h"
#include "EnemyAnimInstance.h"
#include "JellyFishAnimInstance.generated.h"

UCLASS(NonTransient)
class UJellyFishAnimInstance : public UEnemyAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    float HorizontalAngle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    float VerticalSpeed;
    
public:
    UJellyFishAnimInstance();
};

