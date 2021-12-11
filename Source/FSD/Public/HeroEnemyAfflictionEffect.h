#pragma once
#include "CoreMinimal.h"
#include "AfflictionEffect.h"
#include "GameplayTagContainer.h"
#include "HeroEnemyAfflictionEffect.generated.h"

UCLASS(Abstract)
class UHeroEnemyAfflictionEffect : public UAfflictionEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FGameplayTag TagToAdd;
    
public:
    UHeroEnemyAfflictionEffect();
};

