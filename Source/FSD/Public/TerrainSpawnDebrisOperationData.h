#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TerrainSpawnDebrisOperationData.generated.h"

class UDebrisMesh;

USTRUCT(BlueprintType)
struct FTerrainSpawnDebrisOperationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OperationNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Pos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDebrisMesh* Debris;
    
    FSD_API FTerrainSpawnDebrisOperationData();
};

