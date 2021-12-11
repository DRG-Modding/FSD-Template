#pragma once
#include "CoreMinimal.h"
#include "PickaxeMeshInstance.generated.h"

class UMeshComponent;

USTRUCT(BlueprintType)
struct FPickaxeMeshInstance {
    GENERATED_BODY()
public:
    UPROPERTY(Export, Transient)
    UMeshComponent* FP_Mesh;
    
    UPROPERTY(Export, Transient)
    UMeshComponent* TP_Mesh;
    
    FSD_API FPickaxeMeshInstance();
};

