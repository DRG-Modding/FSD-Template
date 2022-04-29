#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EPreviewCellSize.h"
#include "BakeSettings.h"
#include "ESDFModulateMode.h"
#include "SDFModulateLayer.h"
#include "CSGSDFModulatedInstanceProperties.generated.h"

class ASDFBuilder;

USTRUCT(BlueprintType)
struct FCSGSDFModulatedInstanceProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASDFBuilder> SDF;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASDFBuilder> ModulateSDF;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPreviewCellSize CellSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBakeSettings SDFSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBakeSettings ModulateSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Seed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESDFModulateMode ModulateMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSDFModulateLayer> ModulateLayers;
    
    FSDENGINE_API FCSGSDFModulatedInstanceProperties();
};

