#pragma once
#include "CoreMinimal.h"
#include "CSGBase.h"
#include "BinaryTerrainMaterialCombiner.h"
#include "SimpleMeshWithCachedTree.generated.h"

UCLASS(Abstract, BlueprintType)
class USimpleMeshWithCachedTree : public UCSGBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBinaryTerrainMaterialCombiner Materials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool InvertCSG;
    
    USimpleMeshWithCachedTree();
};

