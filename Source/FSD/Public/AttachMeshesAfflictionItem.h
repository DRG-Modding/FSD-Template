#pragma once
#include "CoreMinimal.h"
#include "AttachMeshesAfflictionItem.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct FAttachMeshesAfflictionItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Scale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* Mesh;
    
    FSD_API FAttachMeshesAfflictionItem();
};

