#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "CopyBoneVisibilityCompleted.h"
#include "MicroMissileLauncherAnimInstance.generated.h"

class AMicroMissileLauncher;
class UAnimMontage;

UCLASS(NonTransient)
class UMicroMissileLauncherAnimInstance : public UAnimInstance, public ICopyBoneVisibilityCompleted {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    AMicroMissileLauncher* Weapon;
    
    UFUNCTION(BlueprintCallable)
    void OnMontageEndedInternal(UAnimMontage* Montage, bool interrupted);
    
public:
    UMicroMissileLauncherAnimInstance();
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    void CopyBoneVisibilityCompleted(int32 BoneIndex) override PURE_VIRTUAL(CopyBoneVisibilityCompleted,);
    
};

