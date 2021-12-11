#pragma once
#include "CoreMinimal.h"
#include "AttachMeshesAfflictionItem.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct FAttachMeshesAfflictionItem {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName BoneName;
    
    UPROPERTY(EditAnywhere)
    float Scale;
    
    UPROPERTY(EditAnywhere)
    UStaticMesh* Mesh;
    
    FSD_API FAttachMeshesAfflictionItem();
};

