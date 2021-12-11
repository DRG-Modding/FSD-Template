#pragma once
#include "CoreMinimal.h"
#include "AttackCooldown.generated.h"

USTRUCT(BlueprintType)
struct FAttackCooldown {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName AttackName;
    
    UPROPERTY(EditAnywhere)
    float CoolDown;
    
    FSD_API FAttackCooldown();
};

