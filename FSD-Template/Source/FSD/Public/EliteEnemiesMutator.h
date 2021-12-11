#pragma once
#include "CoreMinimal.h"
#include "Mutator.h"
#include "EliteEnemiesMutator.generated.h"

UCLASS(EditInlineNew)
class UEliteEnemiesMutator : public UMutator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float SpawnChanceModifier;
    
    UPROPERTY(EditAnywhere)
    int32 MaxElites;
    
    UPROPERTY(EditAnywhere)
    float EliteCooldown;
    
    UEliteEnemiesMutator();
};

