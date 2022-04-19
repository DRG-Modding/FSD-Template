#pragma once
#include "CoreMinimal.h"
#include "FakeMoveState.h"
#include "ProjectileBase.h"
#include "FakeMoverState.h"
#include "Engine/EngineTypes.h"
#include "FakePhysicsProjectile.generated.h"

class UFakeMoverSettings;
class UPrimitiveComponent;
class AActor;

UCLASS()
class AFakePhysicsProjectile : public AProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFakeMoverState MoverState;
    
    UPROPERTY(BlueprintReadWrite, Transient, ReplicatedUsing=OnRep_PosVel, meta=(AllowPrivateAccess=true))
    FFakeMoveState posVel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFakeMoverSettings* MoveSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DampOmega;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    float SyncTime;
    
    AFakePhysicsProjectile();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable)
    void SphereBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_PosVel(const FFakeMoveState& NewPosVel);
    
};

