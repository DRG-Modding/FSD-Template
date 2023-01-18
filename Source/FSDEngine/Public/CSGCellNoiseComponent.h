#pragma once
#include "CoreMinimal.h"
#include "BinaryTerrainMaterialCombiner.h"
#include "CSGBaseComponent.h"
#include "MeshCellNoiseProperties.h"
#include "CSGCellNoiseComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UCSGCellNoiseComponent : public UCSGBaseComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMeshCellNoiseProperties Properties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBinaryTerrainMaterialCombiner Materials;
    
    UCSGCellNoiseComponent();
};

