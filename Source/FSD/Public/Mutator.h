#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Mutator.generated.h"

UCLASS(Abstract, EditInlineNew)
class FSD_API UMutator : public UDataAsset {
    GENERATED_BODY()
public:
    UMutator();
};

