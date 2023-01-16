#pragma once
#include "CoreMinimal.h"
#include "EFrozenBitsSize.h"
#include "RandRange.h"
#include "ScalingMeshAfflictionItem.generated.h"

USTRUCT(BlueprintType)
struct FScalingMeshAfflictionItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRandRange MeshScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFrozenBitsSize FrozenBitsSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChanceToSpawn;
    
    FSD_API FScalingMeshAfflictionItem();
};

