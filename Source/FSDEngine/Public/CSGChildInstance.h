#pragma once
#include "CoreMinimal.h"
#include "CSGBase.h"
#include "DeepCSGTree.h"
#include "UObject/NoExportTypes.h"
#include "GeneralTerrainMaterialCombiner.h"
#include "CSGChildInstanceProperties.h"
#include "UObject/NoExportTypes.h"
#include "DeepCSGFloatTree.h"
#include "CSGChildInstance.generated.h"

class UBakeConfig;

UCLASS(BlueprintType)
class UCSGChildInstance : public UCSGBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FCSGChildInstanceProperties Properties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGeneralTerrainMaterialCombiner Materials;
    
    UPROPERTY(Transient)
    UCSGBase* CSGChildInstanceRoot;
    
    UPROPERTY(Transient)
    UBakeConfig* CurrentBakeConfig;
    
    UPROPERTY(Transient)
    FBox ChildLocalSpaceBoundingBox;
    
    UPROPERTY(Transient)
    FBox WorldSpaceBoundingBox;
    
    UPROPERTY(Transient)
    FDeepCSGFloatTree BoundingTree;
    
    UPROPERTY(Transient)
    FMatrix TransformMatInv;
    
    UPROPERTY(Transient)
    FDeepCSGTree TempTree;
    
    UCSGChildInstance();
};

