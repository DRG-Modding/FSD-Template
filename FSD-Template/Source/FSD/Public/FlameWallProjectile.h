#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Projectile.h"
#include "FlameWallProjectile.generated.h"

class AFlameWallSegment;
class AActor;

UCLASS(Abstract)
class AFlameWallProjectile : public AProjectile {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TSubclassOf<AFlameWallSegment> SegmentParticleClass;
    
    UPROPERTY(EditAnywhere)
    int32 SegmentCount;
    
    UPROPERTY(EditAnywhere)
    float WallWidth;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<AActor> ImpactClass;
    
public:
    AFlameWallProjectile();
};

