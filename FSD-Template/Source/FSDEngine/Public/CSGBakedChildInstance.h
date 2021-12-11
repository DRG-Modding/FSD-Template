#pragma once
#include "CoreMinimal.h"
#include "CSGBakedChildInstanceProperties.h"
#include "CSGBase.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "DeepCSGFloatTree.h"
#include "CSGBakedChildInstance.generated.h"

UCLASS(BlueprintType)
class UCSGBakedChildInstance : public UCSGBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FCSGBakedChildInstanceProperties Properties;
    
    UPROPERTY(Transient)
    FBox ChildLocalSpaceBoundingBox;
    
    UPROPERTY(Transient)
    FBox WorldSpaceBoundingBox;
    
    UPROPERTY(Transient)
    FMatrix TransformMatInv;
    
    UPROPERTY(Transient)
    FDeepCSGFloatTree TempTree;
    
    UCSGBakedChildInstance();
};

