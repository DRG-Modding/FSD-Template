#pragma once
#include "CoreMinimal.h"
#include "DeepPathfinderCharacter.h"
#include "NetMontageAble.h"
#include "QueuedMontage.h"
#include "EnemyDeepPathfinderCharacter.generated.h"

class UAnimMontage;
class UEnemyHealthComponent;
class UAnimInstance;
class USkeletalMeshComponent;

UCLASS()
class AEnemyDeepPathfinderCharacter : public ADeepPathfinderCharacter, public INetMontageAble {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UEnemyHealthComponent* HealthComponent;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_QueuedMontage)
    FQueuedMontage QueuedMontage;
    
    UFUNCTION(BlueprintCallable)
    void OnRep_QueuedMontage();
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    AEnemyDeepPathfinderCharacter();
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    float QueueMontage(UAnimMontage* Montage) override PURE_VIRTUAL(QueueMontage, return 0.0f;);
    
    UFUNCTION(BlueprintCallable)
    USkeletalMeshComponent* GetSkeletalMesh() const override PURE_VIRTUAL(GetSkeletalMesh, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    UAnimInstance* GetAnimInstance() const override PURE_VIRTUAL(GetAnimInstance, return NULL;);
    
};

