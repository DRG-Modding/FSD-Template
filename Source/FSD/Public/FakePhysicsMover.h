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
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFakeMoverState MoverState;
    
    UPROPERTY(BlueprintReadWrite, Transient, ReplicatedUsing=OnRep_PosVel, meta=(AllowPrivateAccess=true))
    FFakeMoveState posVel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MoveSettings, meta=(AllowPrivateAccess=true))
    UFakeMoverSettings* MoveSettings;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    float SyncTime;
    
    AFakePhysicsMover();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Teleport(const FVector& Pos, const FVector& Vel);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PosVel(const FFakeMoveState& NewPosVel);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MoveSettings(const UFakeMoverSettings* NewMoveSettings);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ApplyImpulse(const FVector& Impulse);
    
};

