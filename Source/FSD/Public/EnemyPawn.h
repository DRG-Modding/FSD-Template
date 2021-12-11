#pragma once
#include "CoreMinimal.h"
#include "FSDPawn.h"
#include "NetMontageAble.h"
#include "QueuedMontage.h"
#include "EnemyPawn.generated.h"

class UEnemyHealthComponent;
class UEnemyPawnAfflictionComponent;
class UPawnStatsComponent;
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
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UEnemyHealthComponent* Health;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UPawnStatsComponent* Stats;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UEnemyPawnAfflictionComponent* Affliction;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UEnemyComponent* enemy;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName CenterMassSocketName;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_QueuedMontage)
    FQueuedMontage QueuedMontage;
    
    UPROPERTY(Transient)
    TArray<UMaterialInterface*> CachedMaterials;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UMeshComponent* Receive_GetMeshComponent() const;
    
    UFUNCTION(BlueprintCallable)
    void OnRep_QueuedMontage();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    USkeletalMeshComponent* GetMesh() const;
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    AEnemyPawn();
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    float QueueMontage(UAnimMontage* Montage) override PURE_VIRTUAL(QueueMontage, return 0.0f;);
    
    UFUNCTION(BlueprintCallable)
    USkeletalMeshComponent* GetSkeletalMesh() const override PURE_VIRTUAL(GetSkeletalMesh, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    UAnimInstance* GetAnimInstance() const override PURE_VIRTUAL(GetAnimInstance, return NULL;);
    
};

