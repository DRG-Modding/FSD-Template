#pragma once
#include "CoreMinimal.h"
#include "Mutator.h"
#include "InfestedEnemiesMutator.generated.h"

class UParticleSystem;
class AFSDPawn;

UCLASS(BlueprintType, EditInlineNew)
class UInfestedEnemiesMutator : public UMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TArray<UParticleSystem*> SpawnEffects;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UParticleSystem* GetParticleSystem(AFSDPawn* enemy) const;
    
    UInfestedEnemiesMutator();
};

