#pragma once
#include "CoreMinimal.h"
#include "BakeSettings.h"
#include "EPreviewCellSize.h"
#include "Templates/SubclassOf.h"
#include "CSGSDFInstanceProperties.generated.h"

class ASDFBuilder;

USTRUCT(BlueprintType)
struct FCSGSDFInstanceProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASDFBuilder> SDF;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPreviewCellSize CellSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBakeSettings Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Seed;
    
    FSDENGINE_API FCSGSDFInstanceProperties();
};

