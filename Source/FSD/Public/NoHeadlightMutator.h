#pragma once
#include "CoreMinimal.h"
#include "Mutator.h"
#include "NoHeadlightMutator.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNoHeadlightMutator : public UMutator {
    GENERATED_BODY()
public:
    UNoHeadlightMutator();
};

