#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DeepCSGFloatTreePacked.h"
#include "SmartTerrainMaterialVal.h"
#include "BakeEntry.generated.h"

class UTerrainMaterialCore;

USTRUCT(BlueprintType)
struct FBakeEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FDeepCSGFloatTreePacked Tree;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    FBox AABB;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTerrainMaterialCore*> Materials;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSmartTerrainMaterialVal> SmartMaterials;
    
    FSDENGINE_API FBakeEntry();
};

