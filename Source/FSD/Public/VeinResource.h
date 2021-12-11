#pragma once
#include "CoreMinimal.h"
#include "VeinResource.generated.h"

class UVeinResourceCreator;

USTRUCT(BlueprintType)
struct FVeinResource {
    GENERATED_BODY()
public:
    UPROPERTY(Export, Transient)
    UVeinResourceCreator* ResourceCreator;
    
    UPROPERTY(Transient)
    float VeinLengthToGenerate;
    
    FSD_API FVeinResource();
};

