#pragma once
#include "CoreMinimal.h"
#include "MatrixWithExactSync.h"
#include "ECarveFilterType.h"
#include "EPreciousMaterialOptions.h"
#include "CarveWithSTLMeshOperationData.generated.h"

class UTerrainMaterial;
class USTLMeshCarver;
class UStaticMeshCarver;

USTRUCT(BlueprintType)
struct FCarveWithSTLMeshOperationData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 OperationNumber;
    
    UPROPERTY(EditAnywhere)
    USTLMeshCarver* STLMeshCarver;
    
    UPROPERTY(EditAnywhere)
    UStaticMeshCarver* StaticMeshCarver;
    
    UPROPERTY(EditAnywhere)
    UTerrainMaterial* Material;
    
    UPROPERTY(EditAnywhere)
    ECarveFilterType CarveFilter;
    
    UPROPERTY(EditAnywhere)
    EPreciousMaterialOptions Precious;
    
    UPROPERTY(EditAnywhere)
    FMatrixWithExactSync Transform;
    
    FSD_API FCarveWithSTLMeshOperationData();
};

