#pragma once
#include "CoreMinimal.h"
#include "CarveOptionsCellSize.h"
#include "MatrixWithExactSync.h"
#include "ECarveFilterType.h"
#include "EPreciousMaterialOptions.h"
#include "CarveWithColliderOperationData.generated.h"

class UStaticMesh;
class UTerrainMaterial;

USTRUCT(BlueprintType)
struct FCarveWithColliderOperationData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 OperationNumber;
    
    UPROPERTY(EditAnywhere)
    UStaticMesh* StaticMesh;
    
    UPROPERTY(EditAnywhere)
    UTerrainMaterial* Material;
    
    UPROPERTY(EditAnywhere)
    ECarveFilterType CarveFilter;
    
    UPROPERTY(EditAnywhere)
    FMatrixWithExactSync Transform;
    
    UPROPERTY(EditAnywhere)
    float ExpensiveNoise;
    
    UPROPERTY(EditAnywhere)
    EPreciousMaterialOptions Precious;
    
    UPROPERTY(EditAnywhere)
    CarveOptionsCellSize CarveCellSize;
    
    FSD_API FCarveWithColliderOperationData();
};

