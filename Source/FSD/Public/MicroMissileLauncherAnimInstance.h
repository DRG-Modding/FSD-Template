#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "CopyBoneVisibilityCompleted.h"
#include "MicroMissileLauncherAnimInstance.generated.h"

class UAnimMontage;
class AMicroMissileLauncher;

UCLASS(Blueprintable, NonTransient)
class UMicroMissileLauncherAnimInstance : public UAnimInstance, public ICopyBoneVisibilityCompleted {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMicroMissileLauncher* Weapon;
    
public:
    UMicroMissileLauncherAnimInstance();
protected:
    UFUNCTION(BlueprintCallable)
    void OnMontageEndedInternal(UAnimMontage* Montage, bool interrupted);
    
    
    // Fix for true pure virtual functions not being implemented
public:
    UFUNCTION()
    void CopyBoneVisibilityCompleted(int32 BoneIndex) override PURE_VIRTUAL(CopyBoneVisibilityCompleted,);
    
};

