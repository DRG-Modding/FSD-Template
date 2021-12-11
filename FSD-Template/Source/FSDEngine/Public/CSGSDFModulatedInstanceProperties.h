#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BakeSettings.h"
#include "SDFModulateLayer.h"
#include "EPreviewCellSize.h"
#include "ESDFModulateMode.h"
#include "CSGSDFModulatedInstanceProperties.generated.h"

class ASDFBuilder;

USTRUCT(BlueprintType)
struct FCSGSDFModulatedInstanceProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<ASDFBuilder> SDF;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<ASDFBuilder> ModulateSDF;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EPreviewCellSize CellSize;
    
    UPROPERTY(EditAnywhere)
    FBakeSettings SDFSettings;
    
    UPROPERTY(EditAnywhere)
    FBakeSettings ModulateSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Seed;
    
    UPROPERTY(EditAnywhere)
    ESDFModulateMode ModulateMode;
    
    UPROPERTY(EditAnywhere)
    TArray<FSDFModulateLayer> ModulateLayers;
    
    FSDENGINE_API FCSGSDFModulatedInstanceProperties();
};

