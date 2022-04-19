#pragma once
#include "CoreMinimal.h"
#include "RandFloatInterval.h"
#include "ResourceSpawner.generated.h"

class UResourceData;

USTRUCT(BlueprintType)
struct FSD_API FResourceSpawner {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UResourceData* Resource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRandFloatInterval AmountToSpawn;
    
public:
    FResourceSpawner();
};

