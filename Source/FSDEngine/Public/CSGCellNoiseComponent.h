#pragma once
#include "CoreMinimal.h"
#include "CSGBaseComponent.h"
#include "MeshCellNoiseProperties.h"
#include "BinaryTerrainMaterialCombiner.h"
#include "CSGCellNoiseComponent.generated.h"

UCLASS(BlueprintType)
class UCSGCellNoiseComponent : public UCSGBaseComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMeshCellNoiseProperties Properties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBinaryTerrainMaterialCombiner Materials;
    
    UCSGCellNoiseComponent();
};

