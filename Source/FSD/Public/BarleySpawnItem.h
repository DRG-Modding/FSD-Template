#pragma once
#include "CoreMinimal.h"
#include "BarleySpawnItem.generated.h"

class UResourceData;

USTRUCT(BlueprintType)
struct FBarleySpawnItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UResourceData* Resource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    FSD_API FBarleySpawnItem();
};

