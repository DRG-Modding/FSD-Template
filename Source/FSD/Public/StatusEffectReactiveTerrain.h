#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ReactiveTerrain.h"
#include "StatusEffectReactiveTerrain.generated.h"

class UStatusEffect;

UCLASS()
class UStatusEffectReactiveTerrain : public UReactiveTerrain {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UStatusEffect> StatusEffect;
    
public:
    UStatusEffectReactiveTerrain();
};

