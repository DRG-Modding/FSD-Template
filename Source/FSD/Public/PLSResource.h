#pragma once
#include "CoreMinimal.h"
#include "PLSResource.generated.h"

class UResourceData;

USTRUCT()
struct FPLSResource {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UResourceData* Resource;
    
    UPROPERTY(EditAnywhere)
    float AmountToGenerate;
    
    FSD_API FPLSResource();
};

