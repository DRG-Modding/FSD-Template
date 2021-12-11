#pragma once
#include "CoreMinimal.h"
#include "UDebrisStaticCarveMesh.generated.h"

class UStaticMeshCarver;

USTRUCT(BlueprintType)
struct FUDebrisStaticCarveMesh {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UStaticMeshCarver* Mesh;
    
    UPROPERTY(EditAnywhere)
    float Probablity;
    
    FSD_API FUDebrisStaticCarveMesh();
};

