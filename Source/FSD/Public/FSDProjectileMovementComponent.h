#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "FSDProjectileMovementComponent.generated.h"

class AActor;
class UCurveFloat;

UCLASS(meta=(BlueprintSpawnableComponent))
class UFSDProjectileMovementComponent : public UProjectileMovementComponent {
    GENERATED_BODY()
public:
    /*UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FOnProjectilePenetrateDelegate OnProjectilePenetrate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FOnProjectileOutOfPropulsion OnProjectileOutOfPropulsion;*/
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShouldPenetrate: 1;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AActor>> IgnoreCollisionAgainst;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool InvertIgnoreCollisionAgainst;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* AccelerationCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AccelerationMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxPropulsionTime;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    uint8 bCancelPenetration: 1;
    
public:
    UFSDProjectileMovementComponent();
};

