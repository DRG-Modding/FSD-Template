#pragma once
#include "CoreMinimal.h"
#include "CSGBaseComponent.h"
#include "BinaryTerrainMaterialCombiner.h"
#include "CSGSDFInstanceProperties.h"
#include "CSGSDFInstanceComponent.generated.h"

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class FSDENGINE_API UCSGSDFInstanceComponent : public UCSGBaseComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCSGSDFInstanceProperties Properties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBinaryTerrainMaterialCombiner Materials;
    
    UCSGSDFInstanceComponent();
};

