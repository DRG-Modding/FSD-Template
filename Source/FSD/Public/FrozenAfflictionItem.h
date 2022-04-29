#pragma once
#include "CoreMinimal.h"
#include "RandRange.h"
#include "EFrozenBitsSize.h"
#include "FrozenAfflictionItem.generated.h"

USTRUCT(BlueprintType)
struct FFrozenAfflictionItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRandRange MeshScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFrozenBitsSize FrozenBitsSize;
    
    UPROPERTY(EditAnywhere)
    float ChanceToSpawn;
    
    FSD_API FFrozenAfflictionItem();
};

