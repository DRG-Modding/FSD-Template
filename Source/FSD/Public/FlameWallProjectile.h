#pragma once
#include "CoreMinimal.h"
#include "Projectile.h"
#include "Templates/SubclassOf.h"
#include "FlameWallProjectile.generated.h"

class AActor;
class AFlameWallSegment;

UCLASS(Abstract, Blueprintable)
class AFlameWallProjectile : public AProjectile {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AFlameWallSegment> SegmentParticleClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SegmentCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WallWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> ImpactClass;
    
public:
    AFlameWallProjectile();
};

