#pragma once
#include "CoreMinimal.h"
#include "VeinResource.generated.h"

class UVeinResourceCreator;

USTRUCT(BlueprintType)
struct FVeinResource {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UVeinResourceCreator* ResourceCreator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float VeinLengthToGenerate;
    
    FSD_API FVeinResource();
};

