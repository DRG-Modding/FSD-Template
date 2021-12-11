#pragma once
#include "CoreMinimal.h"
#include "Mutator.h"
#include "PlayerDamageTakenMutator.generated.h"

class UDamageClass;

UCLASS(EditInlineNew)
class UPlayerDamageTakenMutator : public UMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float DamageMultiplier;
    
    UPROPERTY(EditAnywhere)
    TSet<UDamageClass*> SkipDamageClasses;
    
public:
    UPlayerDamageTakenMutator();
};

