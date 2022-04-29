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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UDebrisBase*> Debris;
    
    FSD_API FEnemyDebris();
};

