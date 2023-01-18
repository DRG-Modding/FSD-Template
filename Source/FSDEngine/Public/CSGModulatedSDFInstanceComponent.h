#pragma once
#include "CoreMinimal.h"
#include "BinaryTerrainMaterialCombiner.h"
#include "CSGBaseComponent.h"
#include "CSGSDFModulatedInstanceProperties.h"
#include "CSGModulatedSDFInstanceComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FSDENGINE_API UCSGModulatedSDFInstanceComponent : public UCSGBaseComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCSGSDFModulatedInstanceProperties Properties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBinaryTerrainMaterialCombiner Materials;
    
    UCSGModulatedSDFInstanceComponent();
};

