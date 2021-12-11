#pragma once
#include "CoreMinimal.h"
#include "GDTerrainTypes.generated.h"

class UTerrainType;

USTRUCT(BlueprintType)
struct FGDTerrainTypes {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UTerrainType* Rock;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UTerrainType* Dirt;
    
    FSD_API FGDTerrainTypes();
};

