#pragma once
#include "CoreMinimal.h"
#include "EnemyPawn.h"
#include "AttackingPointInterface.h"
#include "ECaveLeechState.h"
#include "Engine/NetSerialization.h"
#include "UObject/NoExportTypes.h"
#include "CaveLeech.generated.h"

class USkeletalMeshComponent;
class UGrabberComponent;
class UPawnAffliction;
class AActor;
class UHealthComponent;
class USceneComponent;
class UHealthComponentBase;

UCLASS(Abstract)
class ACaveLeech : public AEnemyPawn, public IAttackingPointInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USkeletalMeshComponent* SkeletalMesh;
    
    UPROPERTY(Export, VisibleAnywhere)
    UGrabberComponent* GrabberComponent;
    
    UPROPERTY(EditAnywhere)
    float BiteDamage;
    
    UPROPERTY(EditAnywhere)
    float BitesPerSecond;
    
    UPROPERTY(EditAnywhere)
    float MaxDistanceXY;
    
    UPROPERTY(EditAnywhere)
    float GrapDistance;
    
    UPROPERTY(EditAnywhere)
    float GrapDelay;
    
    UPROPERTY(EditAnywhere)
    float TentacleSpeed;
    
    UPROPERTY(EditAnywhere)
    float TentacleRetractSpeed;
    
    UPROPERTY(EditAnywhere)
    float RetractDuration;
    
    UPROPERTY(EditAnywhere)
    float TentaclePullSpeed;
    
    UPROPERTY(EditAnywhere)
    float TentacleDropPlayerSpeed;
    
    UPROPERTY(EditAnywhere)
    float TentacleDropGroundDistance;
    
    UPROPERTY(EditAnywhere)
    float MaxDropPlayerDuration;
    
    UPROPERTY(EditAnywhere)
    float HeadInterpSpeed;
    
    UPROPERTY(EditAnywhere)
    float TentacleAttachOffset;
    
    UPROPERTY(EditAnywhere)
    float BiteDistance;
    
    UPROPERTY(EditAnywhere)
    float RevivedGracePeriod;
    
    UPROPERTY(EditAnywhere)
    UPawnAffliction* CaveLeechSenseAffliction;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float StateTime;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_State)
    ECaveLeechState State;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    FVector_NetQuantize TentacleLocation;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    FVector_NetQuantize TentacleVelocity;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    TWeakObjectPtr<AActor> Target;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    UHealthComponent* HealthTarget;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USceneComponent* TentacleHead;
    
    UFUNCTION(BlueprintCallable)
    void OnRep_State();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetTentacleTargetLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FVector GetMouthLocation() const;
    
    UFUNCTION(BlueprintCallable)
    AActor* GetCurrentTarget();
    
protected:
    UFUNCTION(BlueprintCallable)
    void Died(UHealthComponentBase* HealthComponent);
    
    UFUNCTION(BlueprintCallable)
    void Damaged(float Amount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnStateChanged(ECaveLeechState NewState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnBite(UHealthComponent* TargetHealth);
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    ACaveLeech();
    
    // Fix for true pure virtual functions not being implemented
};

