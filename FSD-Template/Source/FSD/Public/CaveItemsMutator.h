#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Mutator.h"
#include "CaveItemsMutator.generated.h"

class UDebrisItemComponent;

UCLASS(EditInlineNew)
class UCaveItemsMutator : public UMutator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UDebrisItemComponent> Item;
    
    UCaveItemsMutator();
};

