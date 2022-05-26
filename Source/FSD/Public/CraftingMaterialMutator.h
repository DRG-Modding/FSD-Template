#pragma once
#include "CoreMinimal.h"
#include "Mutator.h"
#include "CraftingMaterialMutator.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UCraftingMaterialMutator : public UMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Modifier;
    
public:
    UCraftingMaterialMutator();
};

