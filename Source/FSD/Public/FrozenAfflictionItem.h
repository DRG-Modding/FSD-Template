#pragma once
#include "CoreMinimal.h"
#include "RandRange.h"
#include "EFrozenBitsSize.h"
#include "FrozenAfflictionItem.generated.h"

USTRUCT(BlueprintType)
struct FFrozenAfflictionItem {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName BoneName;
    
    UPROPERTY(EditAnywhere)
    FRandRange MeshScale;
    
    UPROPERTY(EditAnywhere)
    EFrozenBitsSize FrozenBitsSize;
    
    UPROPERTY(EditAnywhere)
    float ChanceToSpawn;
    
    FSD_API FFrozenAfflictionItem();
};

