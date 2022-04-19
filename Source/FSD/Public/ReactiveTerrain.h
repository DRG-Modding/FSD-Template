#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ReactiveTerrain.generated.h"

class UStatusEffectsComponent;

UCLASS(Abstract, Blueprintable)
class UReactiveTerrain : public UObject {
    GENERATED_BODY()
public:
    UReactiveTerrain();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_OnActorLeft(UStatusEffectsComponent* StatusEffects);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_OnActorEntered(UStatusEffectsComponent* StatusEffects);
    
};

