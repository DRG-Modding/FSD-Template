#pragma once
#include "CoreMinimal.h"
#include "FSDPawn.h"
#include "NetMontageAble.h"
#include "QueuedMontage.h"
#include "EnemyPawn.generated.h"

class UPawnStatsComponent;
class UEnemyHealthComponent;
class UEnemyPawnAfflictionComponent;
class UEnemyComponent;
class UMaterialInterface;
class UMeshComponent;
class USkeletalMeshComponent;
class UAnimMontage;
class UAnimInstance;

UCLASS(Abstract)
class AEnemyPawn : public AFSDPawn, public INetMontageAble {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UEnemyHealthComponent* Health;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UPawnStatsComponent* Stats;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UEnemyPawnAfflictionComponent* Affliction;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UEnemyComponent* enemy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CenterMassSocketName;
    
    UPROPERTY(BlueprintReadWrite, Transient, ReplicatedUsing=OnRep_QueuedMontage, meta=(AllowPrivateAccess=true))
    FQueuedMontage QueuedMontage;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> CachedMaterials;
    
public:
    AEnemyPawn();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UMeshComponent* Receive_GetMeshComponent() const;
    
    UFUNCTION(BlueprintCallable)
    void OnRep_QueuedMontage();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    USkeletalMeshComponent* GetMesh() const;
    
    
    // Fix for true pure virtual functions not being implemented
public:
    UFUNCTION(BlueprintCallable)
    float QueueMontage(UAnimMontage* Montage) override PURE_VIRTUAL(QueueMontage, return 0.0f;);
    
    UFUNCTION(BlueprintCallable)
    USkeletalMeshComponent* GetSkeletalMesh() const override PURE_VIRTUAL(GetSkeletalMesh, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    UAnimInstance* GetAnimInstance() const override PURE_VIRTUAL(GetAnimInstance, return NULL;);
    
};

