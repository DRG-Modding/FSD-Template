#pragma once
#include "CoreMinimal.h"
#include "CSGBase.h"
#include "CSGSDFModulatedInstanceProperties.h"
#include "BinaryTerrainMaterialCombiner.h"
#include "UObject/NoExportTypes.h"
#include "DeepCSGFloatTree.h"
#include "UObject/NoExportTypes.h"
#include "CSGModulatedSDFInstance.generated.h"

class USDFBase;
class UBakeConfig;

UCLASS(BlueprintType)
class FSDENGINE_API UCSGModulatedSDFInstance : public UCSGBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCSGSDFModulatedInstanceProperties Properties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBinaryTerrainMaterialCombiner Materials;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    USDFBase* CSGSDFInstanceRoot;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    UBakeConfig* CurrentBakeConfig;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    USDFBase* CSGSDFModulatedInstanceRoot;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    UBakeConfig* CurrentModulatedBakeConfig;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FBox ChildLocalSpaceBoundingBox;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FBox WorldSpaceBoundingBox;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FDeepCSGFloatTree BoundingTree;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FMatrix TransformMatInv;
    
    UCSGModulatedSDFInstance();
};

