#pragma once
#include "CoreMinimal.h"
#include "CSGBase.h"
#include "DeepCSGFloatTree.h"
#include "CSGChildInstanceProperties.h"
#include "UObject/NoExportTypes.h"
#include "GeneralTerrainMaterialCombiner.h"
#include "UObject/NoExportTypes.h"
#include "DeepCSGTree.h"
#include "CSGChildInstance.generated.h"

class UBakeConfig;

UCLASS(BlueprintType)
class UCSGChildInstance : public UCSGBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCSGChildInstanceProperties Properties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGeneralTerrainMaterialCombiner Materials;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    UCSGBase* CSGChildInstanceRoot;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    UBakeConfig* CurrentBakeConfig;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FBox ChildLocalSpaceBoundingBox;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FBox WorldSpaceBoundingBox;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FDeepCSGFloatTree BoundingTree;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FMatrix TransformMatInv;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FDeepCSGTree TempTree;
    
    UCSGChildInstance();
};

