#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "ProjectileSpawnData.generated.h"

class AProjectile;

USTRUCT(BlueprintType)
struct FProjectileSpawnData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<AProjectile> projectileClass;
    
    UPROPERTY(EditAnywhere)
    FFloatInterval HorizontalAngleOffset;
    
    UPROPERTY(EditAnywhere)
    FFloatInterval VerticalAngleOffset;
    
    UPROPERTY(EditAnywhere)
    FFloatInterval Delay;
    
    UPROPERTY(EditAnywhere)
    bool IsBallistic;
    
    FSD_API FProjectileSpawnData();
};

