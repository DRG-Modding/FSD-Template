#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FakeMoverState.h"
#include "FakeMoveState.h"
#include "UObject/NoExportTypes.h"
#include "FakePhysicsMover.generated.h"

class USceneComponent;
class UFakeMoverSettings;

UCLASS()
class AFakePhysicsMover : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FFakeMoverState MoverState;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_PosVel)
    FFakeMoveState posVel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MoveSettings)
    UFakeMoverSettings* MoveSettings;
    
    UPROPERTY(Transient)
    float SyncTime;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Teleport(const FVector& Pos, const FVector& Vel);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PosVel(const FFakeMoveState& NewPosVel);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MoveSettings(const UFakeMoverSettings* NewMoveSettings);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ApplyImpulse(const FVector& Impulse);
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    AFakePhysicsMover();
};

