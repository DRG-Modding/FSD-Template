#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "FakeMoveState.h"
#include "FakeMoverState.h"
#include "FakePhysicsMover.generated.h"

class UFakeMoverSettings;
class USceneComponent;

UCLASS(Blueprintable)
class AFakePhysicsMover : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFakeMoverState MoverState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_PosVel, meta=(AllowPrivateAccess=true))
    FFakeMoveState PosVel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MoveSettings, meta=(AllowPrivateAccess=true))
    UFakeMoverSettings* MoveSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
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

