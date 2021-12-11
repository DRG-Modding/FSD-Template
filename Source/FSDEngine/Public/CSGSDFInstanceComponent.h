#pragma once
#include "CoreMinimal.h"
#include "CSGBaseComponent.h"
#include "CSGSDFInstanceProperties.h"
#include "BinaryTerrainMaterialCombiner.h"
#include "CSGSDFInstanceComponent.generated.h"

UCLASS(BlueprintType)
class FSDENGINE_API UCSGSDFInstanceComponent : public UCSGBaseComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FCSGSDFInstanceProperties Properties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBinaryTerrainMaterialCombiner Materials;
    
    UCSGSDFInstanceComponent();
};

