#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ReactiveTerrain.h"
#include "StatusEffectReactiveTerrain.generated.h"

class UStatusEffect;

UCLASS(Blueprintable)
class UStatusEffectReactiveTerrain : public UReactiveTerrain {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UStatusEffect> StatusEffect;
    
public:
    UStatusEffectReactiveTerrain();
};

