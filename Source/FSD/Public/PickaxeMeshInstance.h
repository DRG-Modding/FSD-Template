#pragma once
#include "CoreMinimal.h"
#include "PickaxeMeshInstance.generated.h"

class UMeshComponent;

USTRUCT(BlueprintType)
struct FPickaxeMeshInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UMeshComponent* FP_Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UMeshComponent* TP_Mesh;
    
    FSD_API FPickaxeMeshInstance();
};

