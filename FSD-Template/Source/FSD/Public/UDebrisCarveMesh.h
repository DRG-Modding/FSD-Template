#pragma once
#include "CoreMinimal.h"
#include "UDebrisCarveMesh.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct FUDebrisCarveMesh {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UStaticMesh* Mesh;
    
    UPROPERTY(EditAnywhere)
    float Probablity;
    
    FSD_API FUDebrisCarveMesh();
};

