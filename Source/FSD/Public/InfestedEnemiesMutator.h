#pragma once
#include "CoreMinimal.h"
#include "Mutator.h"
#include "InfestedEnemiesMutator.generated.h"

class UParticleSystem;
class AFSDPawn;

UCLASS(Blueprintable, EditInlineNew)
class UInfestedEnemiesMutator : public UMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UParticleSystem*> SpawnEffects;
    
public:
    UInfestedEnemiesMutator();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UParticleSystem* GetParticleSystem(AFSDPawn* enemy) const;
    
};

