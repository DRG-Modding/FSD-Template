#pragma once
#include "CoreMinimal.h"
#include "Mutator.h"
#include "CraftingMaterialMutator.generated.h"

UCLASS(EditInlineNew)
class UCraftingMaterialMutator : public UMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float Modifier;
    
public:
    UCraftingMaterialMutator();
};

