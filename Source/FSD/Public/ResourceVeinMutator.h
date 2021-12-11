#pragma once
#include "CoreMinimal.h"
#include "Mutator.h"
#include "ResourceVeinMutator.generated.h"

class UResourceData;

UCLASS(EditInlineNew)
class UResourceVeinMutator : public UMutator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UResourceData* Resource;
    
    UPROPERTY(EditAnywhere)
    float VeinLengthMultiplier;
    
    UPROPERTY(EditAnywhere)
    float RangeMultiplier;
    
    UPROPERTY(EditAnywhere)
    float NoiseRangeMultiplier;
    
    UResourceVeinMutator();
};

