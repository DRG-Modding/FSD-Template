#pragma once
#include "CoreMinimal.h"
#include "EnemyDebris.generated.h"

class UDebrisBase;

USTRUCT(BlueprintType)
struct FEnemyDebris {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float InfluenceRange;
    
    UPROPERTY(EditAnywhere, Export)
    TArray<UDebrisBase*> Debris;
    
    FSD_API FEnemyDebris();
};

