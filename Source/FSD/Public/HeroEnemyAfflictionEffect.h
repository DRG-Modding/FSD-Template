#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AfflictionEffect.h"
#include "HeroEnemyAfflictionEffect.generated.h"

UCLASS(Abstract, Blueprintable)
class UHeroEnemyAfflictionEffect : public UAfflictionEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag TagToAdd;
    
public:
    UHeroEnemyAfflictionEffect();
};

