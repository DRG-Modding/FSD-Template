#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "EnemyPawn.h"
#include "AttackingPointInterface.h"
#include "ECaveLeechState.h"
#include "UObject/NoExportTypes.h"
#include "CaveLeech.generated.h"

class AActor;
class UPawnAffliction;
class USkeletalMeshComponent;
class UGrabberComponent;
class UHealthComponent;
class USceneComponent;
class UHealthComponentBase;

UCLASS(Abstract)
class ACaveLeech : public AEnemyPawn, public IAttackingPointInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UGrabberComponent* GrabberComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BiteDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BitesPerSecond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDistanceXY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GrapDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GrapDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TentacleSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TentacleRetractSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RetractDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TentaclePullSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TentacleDropPlayerSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TentacleDropGroundDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDropPlayerDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeadInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TentacleAttachOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BiteDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RevivedGracePeriod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPawnAffliction* CaveLeechSenseAffliction;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    float StateTime;
    
    UPROPERTY(BlueprintReadWrite, Transient, ReplicatedUsing=OnRep_State, meta=(AllowPrivateAccess=true))
    ECaveLeechState State;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize TentacleLocation;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize TentacleVelocity;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> Target;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    UHealthComponent* HealthTarget;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
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
    
    UFUNCTION(BlueprintCallable)
    void Damaged(float Amount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnStateChanged(ECaveLeechState NewState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnBite(UHealthComponent* TargetHealth);
    
    
    // Fix for true pure virtual functions not being implemented
};

