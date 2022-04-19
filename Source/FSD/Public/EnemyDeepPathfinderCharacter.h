#pragma once
#include "CoreMinimal.h"
#include "DeepPathfinderCharacter.h"
#include "NetMontageAble.h"
#include "QueuedMontage.h"
#include "EnemyDeepPathfinderCharacter.generated.h"

class USkeletalMeshComponent;
class UMeshComponent;
class UEnemyHealthComponent;
class UMaterialInterface;
class UAnimMontage;
class UAnimInstance;

UCLASS()
class AEnemyDeepPathfinderCharacter : public ADeepPathfinderCharacter, public INetMontageAble {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UEnemyHealthComponent* HealthComponent;
    
    UPROPERTY(BlueprintReadWrite, Transient, ReplicatedUsing=OnRep_QueuedMontage, meta=(AllowPrivateAccess=true))
    FQueuedMontage QueuedMontage;
    
public:
    AEnemyDeepPathfinderCharacter();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SwitchToDynamicBaseShader(UMaterialInterface* baseShader, UMeshComponent* MeshComponent) const;
    
    UFUNCTION(BlueprintCallable)
    void OnRep_QueuedMontage();
    
    
    // Fix for true pure virtual functions not being implemented
public:
    UFUNCTION(BlueprintCallable)
    float QueueMontage(UAnimMontage* Montage) override PURE_VIRTUAL(QueueMontage, return 0.0f;);
    
    UFUNCTION(BlueprintCallable)
    USkeletalMeshComponent* GetSkeletalMesh() const override PURE_VIRTUAL(GetSkeletalMesh, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    UAnimInstance* GetAnimInstance() const override PURE_VIRTUAL(GetAnimInstance, return NULL;);
    
};

