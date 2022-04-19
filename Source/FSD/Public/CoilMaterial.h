#pragma once
#include "CoreMinimal.h"
#include "CoilMaterial.generated.h"

class UMaterialInstanceDynamic;

USTRUCT(BlueprintType)
struct FCoilMaterial {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Material;
    
    FSD_API FCoilMaterial();
};

