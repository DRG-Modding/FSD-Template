#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "MatrixWithExactSync.h"
#include "BakeSettings.h"
#include "CSGBuildOperationData.generated.h"

class ACSGBuilder;

USTRUCT(BlueprintType)
struct FCSGBuildOperationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OperationNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ACSGBuilder> CSGModel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBakeSettings CarverSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMatrixWithExactSync Transform;
    
    FSD_API FCSGBuildOperationData();
};

