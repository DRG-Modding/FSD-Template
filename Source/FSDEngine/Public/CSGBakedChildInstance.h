#pragma once
#include "CoreMinimal.h"
#include "CSGBase.h"
#include "DeepCSGFloatTree.h"
#include "CSGBakedChildInstanceProperties.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "CSGBakedChildInstance.generated.h"

UCLASS(BlueprintType)
class UCSGBakedChildInstance : public UCSGBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCSGBakedChildInstanceProperties Properties;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FBox ChildLocalSpaceBoundingBox;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FBox WorldSpaceBoundingBox;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FMatrix TransformMatInv;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FDeepCSGFloatTree TempTree;
    
    UCSGBakedChildInstance();
};

