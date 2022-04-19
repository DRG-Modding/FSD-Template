#pragma once
#include "CoreMinimal.h"
#include "PLSResource.generated.h"

class UResourceData;

USTRUCT()
struct FPLSResource {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UResourceData* Resource;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float AmountToGenerate;
    
    FSD_API FPLSResource();
};

