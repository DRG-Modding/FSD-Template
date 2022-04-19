#pragma once
#include "CoreMinimal.h"
#include "EEmptyBinaryComb.h"
#include "EmptyBinaryMatProperties.generated.h"

class UTerrainMaterialCore;

USTRUCT(BlueprintType)
struct FEmptyBinaryMatProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEmptyBinaryComb Result;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTerrainMaterialCore* Material;
    
    FSDENGINE_API FEmptyBinaryMatProperties();
};

