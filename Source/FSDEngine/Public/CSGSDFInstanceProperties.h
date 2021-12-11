#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BakeSettings.h"
#include "EPreviewCellSize.h"
#include "CSGSDFInstanceProperties.generated.h"

class ASDFBuilder;

USTRUCT(BlueprintType)
struct FCSGSDFInstanceProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<ASDFBuilder> SDF;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EPreviewCellSize CellSize;
    
    UPROPERTY(EditAnywhere)
    FBakeSettings Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Seed;
    
    FSDENGINE_API FCSGSDFInstanceProperties();
};

