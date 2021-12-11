#pragma once
#include "CoreMinimal.h"
#include "CSGBaseComponent.h"
#include "BinaryTerrainMaterialCombiner.h"
#include "SimpleMeshWithCachedTreeComponent.generated.h"

UCLASS(BlueprintType)
class USimpleMeshWithCachedTreeComponent : public UCSGBaseComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBinaryTerrainMaterialCombiner Materials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool InvertCSG;
    
    USimpleMeshWithCachedTreeComponent();
};

