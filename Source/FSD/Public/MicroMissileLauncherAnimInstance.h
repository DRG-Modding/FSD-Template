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
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    AMicroMissileLauncher* Weapon;
    
public:
    UMicroMissileLauncherAnimInstance();
protected:
    UFUNCTION(BlueprintCallable)
    void OnMontageEndedInternal(UAnimMontage* Montage, bool interrupted);
    
    
    // Fix for true pure virtual functions not being implemented
public:
    UFUNCTION(BlueprintCallable)
    void CopyBoneVisibilityCompleted(int32 BoneIndex) override PURE_VIRTUAL(CopyBoneVisibilityCompleted,);
    
};

