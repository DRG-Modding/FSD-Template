#pragma once
#include "CoreMinimal.h"
#include "Mutator.h"
#include "VeinMutator.generated.h"

class UVeinResourceData;

UCLASS(EditInlineNew)
class UVeinMutator : public UMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UVeinResourceData* VeinResource;
    
    UPROPERTY(EditAnywhere)
    float Modifier;
    
public:
    UVeinMutator();
};

