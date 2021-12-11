#pragma once
#include "CoreMinimal.h"
#include "PlayerAnimInstance.h"
#include "UObject/NoExportTypes.h"
#include "PlayerTPAnimInstance.generated.h"

class UAnimSequence;
class UBlendSpace1D;

UCLASS(NonTransient)
class UPlayerTPAnimInstance : public UPlayerAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    float RigidBodyBlend;
    
    UPROPERTY(BlueprintReadWrite)
    bool RigidBodyOn;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    float UpperBodyBlend;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    float AimingValue;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    FRotator CounerMoveadjustmentAngleRotator;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool FullBodyAnimActive;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float FullBodyBlendTime;
    
    UPROPERTY(EditAnywhere)
    float BodyTurnRecoverySpeed;
    
    UPROPERTY(EditAnywhere)
    float BodyTurnMaxAngle;
    
    UPROPERTY(EditAnywhere)
    float BodyTurnLerpEXP;
    
    UPROPERTY(EditAnywhere)
    float TurnAnimationDuration;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool bCaveLeechBiting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CaveLeechBiteReactDelay;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool IsResettingBodyTurn;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRotator BodyTurn;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRotator CounterBodyTurn;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool TurningLeft;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool TurningRight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TurnProgress;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool HasPickedUpItem;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsLyingDownNoTransition;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    int32 DanceMove;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UAnimSequence* DanceSequence;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool IsDancing;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float PickedUpItemBlend;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float AttachedBodyTurnFactor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float AttachedHeadTurnFactor;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FRotator AttachedBodyRotation;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FRotator AttachedHeadRotation;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UBlendSpace1D* TP_LookUpDown;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UBlendSpace1D* TP_LookUpDown_Aim;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UBlendSpace1D* A_TP_LookUpDown_Aim;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UBlendSpace1D* B_TP_LookUpDown_Aim;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UAnimSequence* TP_JumpLoop;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UAnimSequence* TP_JumpLoop_Aim;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UAnimSequence* TP_JumpStart;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UAnimSequence* TP_JumpStart_Aim;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UAnimSequence* TP_Sprint;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UAnimSequence* A_TP_Idle;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UAnimSequence* B_TP_Idle;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UAnimSequence* A_TP_Idle_Aim;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UAnimSequence* B_TP_Idle_Aim;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UAnimSequence* TP_LookForward;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UAnimSequence* A_TP_LookForward;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UAnimSequence* B_TP_LookForward;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UAnimSequence* A_TP_LookForward_Aim;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UAnimSequence* B_TP_LookForward_Aim;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UAnimSequence* A_TP_Walk_Forward;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UAnimSequence* B_TP_Walk_Forward;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UAnimSequence* A_TP_Run_Forward;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UAnimSequence* B_TP_Run_Forward;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UAnimSequence* A_TP_Walk_Forward_Aim;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UAnimSequence* B_TP_Walk_Forward_Aim;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UAnimSequence* A_TP_Run_Forward_Aim;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UAnimSequence* B_TP_Run_Forward_Aim;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UAnimSequence* A_TP_Walk_Right;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UAnimSequence* B_TP_Walk_Right;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UAnimSequence* A_TP_Run_Right;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UAnimSequence* B_TP_Run_Right;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UAnimSequence* A_TP_Walk_Right_Aim;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UAnimSequence* B_TP_Walk_Right_Aim;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UAnimSequence* A_TP_Run_Right_Aim;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UAnimSequence* B_TP_Run_Right_Aim;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UAnimSequence* A_TP_Walk_Left;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UAnimSequence* B_TP_Walk_Left;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UAnimSequence* A_TP_Run_Left;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UAnimSequence* B_TP_Run_Left;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UAnimSequence* A_TP_Walk_Left_Aim;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UAnimSequence* B_TP_Walk_Left_Aim;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UAnimSequence* A_TP_Run_Left_Aim;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UAnimSequence* B_TP_Run_Left_Aim;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UAnimSequence* A_TP_Walk_Back;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UAnimSequence* B_TP_Walk_Back;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UAnimSequence* A_TP_Run_Back;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UAnimSequence* B_TP_Run_Back;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UAnimSequence* A_TP_Walk_Back_Aim;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UAnimSequence* B_TP_Walk_Back_Aim;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UAnimSequence* A_TP_Run_Back_Aim;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UAnimSequence* B_TP_Run_Back_Aim;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UAnimSequence* TP_Revived;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UAnimSequence* TP_Downed;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UAnimSequence* TP_Downed_Loop;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetOverrideFullBody(bool overrideEnabled);
    
    UPlayerTPAnimInstance();
};

