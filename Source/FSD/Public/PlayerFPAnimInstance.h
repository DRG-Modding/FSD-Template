#pragma once
#include "CoreMinimal.h"
#include "PlayerAnimInstance.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "PlayerFPAnimInstance.generated.h"

class UAnimSequence;

UCLASS(NonTransient)
class UPlayerFPAnimInstance : public UPlayerAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRotator WeaponRecoil;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float HeadBobScale;
    
    UPROPERTY(EditAnywhere)
    float WeaponSwayRecoverySpeed;
    
    UPROPERTY(EditAnywhere)
    float WeaponSwayAlphaRecoverySpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRotator WeaponSwayAngle;
    
    UPROPERTY(EditAnywhere)
    float WeaponSwayMaxAngle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRotator CameraAntiSwayAngle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float WeaponSwayAlpha;
    
    UPROPERTY(Transient)
    float WeaponSwayToApply;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FVector CameraOffset;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FVector NegativeCameraOffset;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool HeadOnlyMode;
    
public:
    UPROPERTY(BlueprintReadOnly, Transient)
    FRotator HeadRotation;
    
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    UAnimSequence* FP_Idle;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UAnimSequence* FP_Walk;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UAnimSequence* FP_Sprint;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UAnimSequence* FP_JumpStart;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UAnimSequence* FP_JumpLoop;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UAnimSequence* FP_JumpLand;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UAnimSequence* FP_JumpLand_Aim;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UAnimSequence* FP_Downed;
    
public:
    UPlayerFPAnimInstance();
};

