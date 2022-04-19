#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "AnimNotifyDelegateDelegate.h"
#include "NameDelegateDelegate.h"
#include "IsAttackingChangedDelegateDelegate.h"
#include "EnemyAnimInstance.generated.h"

class UHealthComponentBase;
class USkeletalMeshComponent;

UCLASS(NonTransient)
class UEnemyAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FAnimNotifyDelegate OnRangedAttackNotify;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FNameDelegate OnMeleeAttackNotify;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FAnimNotifyDelegate OnStopLeadingNotify;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FIsAttackingChangedDelegate OnIsAttackingChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool IsAttacking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsAlive;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    float RandomStartPosition;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    UHealthComponentBase* HealthComponent;
    
public:
    UEnemyAnimInstance();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSlotPlayingAnyAnimation(FName SlotNodeName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNotAttacking() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDead() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeletalMeshComponent* GetSkeletalMesh() const;
    
};

