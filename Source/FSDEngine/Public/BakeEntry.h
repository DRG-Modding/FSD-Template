#pragma once
#include "CoreMinimal.h"
#include "DeepCSGFloatTreePacked.h"
#include "SmartTerrainMaterialVal.h"
#include "UObject/NoExportTypes.h"
#include "BakeEntry.generated.h"

class UTerrainMaterialCore;

USTRUCT(BlueprintType)
struct FBakeEntry {
    GENERATED_BODY()
public:
    UPROPERTY()
    FDeepCSGFloatTreePacked Tree;
    
    UPROPERTY(VisibleAnywhere)
    FBox AABB;
    
    UPROPERTY(VisibleAnywhere)
    TArray<UTerrainMaterialCore*> Materials;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FSmartTerrainMaterialVal> SmartMaterials;
    
    FSDENGINE_API FBakeEntry();
};

