#pragma once
#include "CoreMinimal.h"
#include "MatrixWithExactSync.h"
#include "EPreciousMaterialOptions.h"
#include "ECarveFilterType.h"
#include "CarveWithSTLMeshOperationData.generated.h"

class USTLMeshCarver;
class UStaticMeshCarver;
class UTerrainMaterial;

USTRUCT(BlueprintType)
struct FCarveWithSTLMeshOperationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OperationNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USTLMeshCarver* STLMeshCarver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMeshCarver* StaticMeshCarver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTerrainMaterial* Material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECarveFilterType CarveFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPreciousMaterialOptions Precious;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMatrixWithExactSync Transform;
    
    FSD_API FCarveWithSTLMeshOperationData();
};

