#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ItemLoadoutAnimations.h"
#include "ItemCharacterAnimationSet.generated.h"

class UAnimSequence;
class UBlendSpace1D;
class UAnimMontage;
class UItemCharacterAnimationSet;

UCLASS(BlueprintType)
class UItemCharacterAnimationSet : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UAnimSequence* FP_Idle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* FP_InspectWeapon;
    
    UPROPERTY(EditAnywhere)
    UAnimSequence* FP_Walk;
    
    UPROPERTY(EditAnywhere)
    UAnimSequence* FP_Sprint;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* FP_JumpStart_Montage;
    
    UPROPERTY(EditAnywhere)
    UAnimSequence* FP_JumpStart;
    
    UPROPERTY(EditAnywhere)
    UAnimSequence* FP_JumpLoop;
    
    UPROPERTY(EditAnywhere)
    UAnimSequence* FP_JumpLand;
    
    UPROPERTY(EditAnywhere)
    UAnimSequence* FP_JumpLand_Aim;
    
    UPROPERTY(EditAnywhere)
    UAnimSequence* FP_Downed;
    
    UPROPERTY(EditAnywhere)
    UBlendSpace1D* TP_LookUpDown;
    
    UPROPERTY(EditAnywhere)
    UBlendSpace1D* TP_LookUpDown_Aim;
    
    UPROPERTY(EditAnywhere)
    UAnimSequence* TP_Sprint;
    
    UPROPERTY(EditAnywhere)
    UAnimSequence* TP_Idle;
    
    UPROPERTY(EditAnywhere)
    UAnimSequence* TP_Idle_Aim;
    
    UPROPERTY(EditAnywhere)
    UAnimSequence* TP_LookForward;
    
    UPROPERTY(EditAnywhere)
    UAnimSequence* TP_LookForward_Aim;
    
    UPROPERTY(EditAnywhere)
    UAnimSequence* TP_JumpStart;
    
    UPROPERTY(EditAnywhere)
    UAnimSequence* TP_JumpStart_Aim;
    
    UPROPERTY(EditAnywhere)
    UAnimSequence* TP_JumpLoop;
    
    UPROPERTY(EditAnywhere)
    UAnimSequence* TP_JumpLoop_Aim;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* TP_JumpLand;
    
    UPROPERTY(EditAnywhere)
    UAnimSequence* TP_Walk_Forward;
    
    UPROPERTY(EditAnywhere)
    UAnimSequence* TP_Walk_Forward_Aim;
    
    UPROPERTY(EditAnywhere)
    UAnimSequence* TP_Run_Forward;
    
    UPROPERTY(EditAnywhere)
    UAnimSequence* TP_Run_Forward_Aim;
    
    UPROPERTY(EditAnywhere)
    UAnimSequence* TP_Walk_Right;
    
    UPROPERTY(EditAnywhere)
    UAnimSequence* TP_Walk_Right_Aim;
    
    UPROPERTY(EditAnywhere)
    UAnimSequence* TP_Run_Right;
    
    UPROPERTY(EditAnywhere)
    UAnimSequence* TP_Run_Right_Aim;
    
    UPROPERTY(EditAnywhere)
    UAnimSequence* TP_Walk_Left;
    
    UPROPERTY(EditAnywhere)
    UAnimSequence* TP_Walk_Left_Aim;
    
    UPROPERTY(EditAnywhere)
    UAnimSequence* TP_Run_Left;
    
    UPROPERTY(EditAnywhere)
    UAnimSequence* TP_Run_Left_Aim;
    
    UPROPERTY(EditAnywhere)
    UAnimSequence* TP_Walk_Back;
    
    UPROPERTY(EditAnywhere)
    UAnimSequence* TP_Walk_Back_Aim;
    
    UPROPERTY(EditAnywhere)
    UAnimSequence* TP_Run_Back;
    
    UPROPERTY(EditAnywhere)
    UAnimSequence* TP_Run_Back_Aim;
    
    UPROPERTY(EditAnywhere)
    UAnimSequence* TP_Revived;
    
    UPROPERTY(EditAnywhere)
    UAnimSequence* TP_Downed;
    
    UPROPERTY(EditAnywhere)
    UAnimSequence* TP_Downed_Loop;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FItemLoadoutAnimations LoadoutAnimations;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CameraOffset;
    
    UPROPERTY(EditAnywhere)
    UItemCharacterAnimationSet* ParentSet;
    
    UItemCharacterAnimationSet();
};

