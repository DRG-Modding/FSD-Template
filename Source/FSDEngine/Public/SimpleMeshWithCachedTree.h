#pragma once
#include "CoreMinimal.h"
#include "CSGBase.h"
#include "BinaryTerrainMaterialCombiner.h"
#include "SimpleMeshWithCachedTree.generated.h"

UCLASS(Abstract, Blueprintable)
class USimpleMeshWithCachedTree : public UCSGBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBinaryTerrainMaterialCombiner Materials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool InvertCSG;
    
    USimpleMeshWithCachedTree();
};

