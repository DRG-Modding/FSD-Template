#pragma once
#include "CoreMinimal.h"
#include "EBinaryComb.h"
#include "BinaryMatProperties.generated.h"

class UTerrainMaterialCore;

USTRUCT(BlueprintType)
struct FBinaryMatProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBinaryComb Result;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTerrainMaterialCore* Material;
    
    FSDENGINE_API FBinaryMatProperties();
};

