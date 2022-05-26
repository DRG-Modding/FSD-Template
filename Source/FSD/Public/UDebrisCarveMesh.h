#pragma once
#include "CoreMinimal.h"
#include "UDebrisCarveMesh.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct FUDebrisCarveMesh {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Probablity;
    
    FSD_API FUDebrisCarveMesh();
};

