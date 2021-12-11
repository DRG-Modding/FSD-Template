#pragma once
#include "CoreMinimal.h"
#include "CSGBaseComponent.h"
#include "CSGSDFModulatedInstanceProperties.h"
#include "BinaryTerrainMaterialCombiner.h"
#include "CSGModulatedSDFInstanceComponent.generated.h"

UCLASS(BlueprintType)
class FSDENGINE_API UCSGModulatedSDFInstanceComponent : public UCSGBaseComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FCSGSDFModulatedInstanceProperties Properties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBinaryTerrainMaterialCombiner Materials;
    
    UCSGModulatedSDFInstanceComponent();
};

