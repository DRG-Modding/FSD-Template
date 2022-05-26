#pragma once
#include "CoreMinimal.h"
#include "UDebrisStaticCarveMesh.generated.h"

class UStaticMeshCarver;

USTRUCT(BlueprintType)
struct FUDebrisStaticCarveMesh {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMeshCarver* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Probablity;
    
    FSD_API FUDebrisStaticCarveMesh();
};

