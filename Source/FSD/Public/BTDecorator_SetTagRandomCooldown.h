#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "GameplayTagContainer.h"
#include "RandRange.h"
#include "BTDecorator_SetTagRandomCooldown.generated.h"

UCLASS()
class UBTDecorator_SetTagRandomCooldown : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGameplayTag CooldownTag;
    
    UPROPERTY(EditAnywhere)
    FRandRange CooldownDuration;
    
    UPROPERTY(EditAnywhere)
    bool bAddToExistingDuration;
    
    UPROPERTY(EditAnywhere)
    bool TriggerOnActivation;
    
    UBTDecorator_SetTagRandomCooldown();
};

