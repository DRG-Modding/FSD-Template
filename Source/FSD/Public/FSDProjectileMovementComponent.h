#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Engine/EngineTypes.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "FSDProjectileMovementComponent.generated.h"

class AActor;
class UCurveFloat;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFSDProjectileMovementComponentOnProjectileOutOfPropulsion);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFSDProjectileMovementComponentOnProjectilePenetrate, const FHitResult&, ImpactResult);

UCLASS()
class UFSDProjectileMovementComponent : public UProjectileMovementComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FFSDProjectileMovementComponentOnProjectilePenetrate OnProjectilePenetrate;
    
    UPROPERTY(BlueprintAssignable)
    FFSDProjectileMovementComponentOnProjectileOutOfPropulsion OnProjectileOutOfPropulsion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bShouldPenetrate: 1;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TSubclassOf<AActor>> IgnoreCollisionAgainst;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool InvertIgnoreCollisionAgainst;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* AccelerationCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AccelerationMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxPropulsionTime;
    
    UPROPERTY(BlueprintReadWrite)
    uint8 bCancelPenetration: 1;
    
public:
    UFSDProjectileMovementComponent();
};

