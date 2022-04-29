#pragma once
#include "CoreMinimal.h"
#include "EnemyPawn.h"
#include "ECaveLeechState.h"
#include "Engine/NetSerialization.h"
#include "AttackingPointInterface.h"
#include "UObject/NoExportTypes.h"
#include "CaveLeech.generated.h"

class USkeletalMeshComponent;
class UGrabberComponent;
class UPawnAffliction;
class AActor;
class UHealthComponent;
class USceneComponent;
class UHealthComponentBase;

UCLASS(Abstract, Blueprintable)
class ACaveLeech : public AEnemyPawn, public IAttackingPointInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPawnAffliction* CaveLeechSenseAffliction;
    
    UPROPERTY(EditAnywhere, Transient)
    float StateTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_State, meta=(AllowPrivateAccess=true))
    ECaveLeechState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize TentacleLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize TentacleVelocity;
    
    UPROPERTY(EditAnywhere, Replicated, Transient)
    TWeakObjectPtr<AActor> Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UHealthComponent* HealthTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USceneComponent* TentacleHead;
    
public:
    ACaveLeech();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
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
    
    UFUNCTION()
    void Damaged(float Amount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnStateChanged(ECaveLeechState NewState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnBite(UHealthComponent* TargetHealth);
    
    
    // Fix for true pure virtual functions not being implemented
};

