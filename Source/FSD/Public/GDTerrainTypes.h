#pragma once
#include "CoreMinimal.h"
#include "GDTerrainTypes.generated.h"

class UTerrainType;

USTRUCT(BlueprintType)
struct FGDTerrainTypes {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTerrainType* Rock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTerrainType* Dirt;
    
    FSD_API FGDTerrainTypes();
};

