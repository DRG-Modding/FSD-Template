#pragma once
#include "CoreMinimal.h"
#include "DeepCSGFloatTreePacked.h"
#include "UObject/NoExportTypes.h"
#include "SmartTerrainMaterialVal.h"
#include "BakeEntry.generated.h"

class UTerrainMaterialCore;

USTRUCT(BlueprintType)
struct FBakeEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDeepCSGFloatTreePacked Tree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBox AABB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTerrainMaterialCore*> Materials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSmartTerrainMaterialVal> SmartMaterials;
    
    FSDENGINE_API FBakeEntry();
};

