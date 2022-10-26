#pragma once
#include "CoreMinimal.h"
#include "EnemyDebris.generated.h"

class UDebrisBase;

USTRUCT(BlueprintType)
struct FEnemyDebris {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InfluenceRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UDebrisBase*> Debris;
    
    FSD_API FEnemyDebris();
};

