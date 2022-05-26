#pragma once
#include "CoreMinimal.h"
#include "Mutator.h"
#include "EliteEnemiesMutator.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UEliteEnemiesMutator : public UMutator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnChanceModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxElites;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EliteCooldown;
    
    UEliteEnemiesMutator();
};

