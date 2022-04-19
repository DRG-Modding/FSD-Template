#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "UObject/NoExportTypes.h"
#include "EHackingPodState.h"
#include "FacilityHackingPodAnimInstance.generated.h"

class AActor;

UCLASS(NonTransient)
class UFacilityHackingPodAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    AActor* SaluteTarget;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FRotator LookingDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRotator TargetRotation;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool IsHacking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EHackingPodState PodState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float RadarDishAngle;
    
public:
    UFacilityHackingPodAnimInstance();
    UFUNCTION(BlueprintCallable)
    void SetSaluter(AActor* salutingTarget);
    
    UFUNCTION(BlueprintCallable)
    void ResetSaluteTarget();
    
};

