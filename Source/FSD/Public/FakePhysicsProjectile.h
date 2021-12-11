#pragma once
#include "CoreMinimal.h"
#include "ProjectileBase.h"
#include "FakeMoverState.h"
#include "FakeMoveState.h"
#include "Engine/EngineTypes.h"
#include "FakePhysicsProjectile.generated.h"

class UFakeMoverSettings;
class UPrimitiveComponent;
class AActor;

UCLASS()
class AFakePhysicsProjectile : public AProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FFakeMoverState MoverState;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_PosVel)
    FFakeMoveState posVel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UFakeMoverSettings* MoveSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float InitialSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DampOmega;
    
    UPROPERTY(Transient)
    float SyncTime;
    
private:
    UFUNCTION(BlueprintCallable)
    void SphereBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_PosVel(const FFakeMoveState& NewPosVel);
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    AFakePhysicsProjectile();
};

