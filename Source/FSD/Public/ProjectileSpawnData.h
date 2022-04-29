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
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AProjectile> ProjectileClass;
    
    UPROPERTY(EditAnywhere)
    FFloatInterval HorizontalAngleOffset;
    
    UPROPERTY(EditAnywhere)
    FFloatInterval VerticalAngleOffset;
    
    UPROPERTY(EditAnywhere)
    FFloatInterval Delay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsBallistic;
    
    FSD_API FProjectileSpawnData();
};

