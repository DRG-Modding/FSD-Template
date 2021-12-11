#pragma once
#include "CoreMinimal.h"
#include "CSGBase.h"
#include "CSGSDFModulatedInstanceProperties.h"
#include "DeepCSGFloatTree.h"
#include "BinaryTerrainMaterialCombiner.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "CSGModulatedSDFInstance.generated.h"

class USDFBase;
class UBakeConfig;

UCLASS(BlueprintType)
class FSDENGINE_API UCSGModulatedSDFInstance : public UCSGBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FCSGSDFModulatedInstanceProperties Properties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBinaryTerrainMaterialCombiner Materials;
    
    UPROPERTY(Transient)
    USDFBase* CSGSDFInstanceRoot;
    
    UPROPERTY(Transient)
    UBakeConfig* CurrentBakeConfig;
    
    UPROPERTY(Transient)
    USDFBase* CSGSDFModulatedInstanceRoot;
    
    UPROPERTY(Transient)
    UBakeConfig* CurrentModulatedBakeConfig;
    
    UPROPERTY(Transient)
    FBox ChildLocalSpaceBoundingBox;
    
    UPROPERTY(Transient)
    FBox WorldSpaceBoundingBox;
    
    UPROPERTY(Transient)
    FDeepCSGFloatTree BoundingTree;
    
    UPROPERTY(Transient)
    FMatrix TransformMatInv;
    
    UCSGModulatedSDFInstance();
};

