#pragma once
#include "CoreMinimal.h"
#include "DeepPathfinderCharacter.h"
#include "NetMontageAble.h"
#include "QueuedMontage.h"
#include "EnemyDeepPathfinderCharacter.generated.h"

class UAnimInstance;
class UAnimMontage;
class UEnemyHealthComponent;
class UMaterialInterface;
class UMeshComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class AEnemyDeepPathfinderCharacter : public ADeepPathfinderCharacter, public INetMontageAble {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEnemyHealthComponent* HealthComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_QueuedMontage, meta=(AllowPrivateAccess=true))
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

