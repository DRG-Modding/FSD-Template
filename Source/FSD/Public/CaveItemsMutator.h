#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Mutator.h"
#include "CaveItemsMutator.generated.h"

class UDebrisItemComponent;

UCLASS(Blueprintable, EditInlineNew)
class UCaveItemsMutator : public UMutator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDebrisItemComponent> Item;
    
    UCaveItemsMutator();
};

