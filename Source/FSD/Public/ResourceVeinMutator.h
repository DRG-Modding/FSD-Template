#pragma once
#include "CoreMinimal.h"
#include "Mutator.h"
#include "ResourceVeinMutator.generated.h"

class UResourceData;

UCLASS(Blueprintable, EditInlineNew)
class UResourceVeinMutator : public UMutator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UResourceData* Resource;
    
    UPROPERTY(EditAnywhere)
    float VeinLengthMultiplier;
    
    UPROPERTY(EditAnywhere)
    float RangeMultiplier;
    
    UPROPERTY(EditAnywhere)
    float NoiseRangeMultiplier;
    
    UResourceVeinMutator();
};

