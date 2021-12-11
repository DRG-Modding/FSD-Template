#pragma once
#include "CoreMinimal.h"
#include "RandFloatInterval.h"
#include "ResourceSpawner.generated.h"

class UResourceData;

USTRUCT(BlueprintType)
struct FResourceSpawner {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UResourceData* Resource;
    
    UPROPERTY(EditAnywhere)
    FRandFloatInterval AmountToSpawn;
    
public:
    FSD_API FResourceSpawner();
};

