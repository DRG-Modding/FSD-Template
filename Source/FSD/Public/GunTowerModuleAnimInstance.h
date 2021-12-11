#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "UObject/NoExportTypes.h"
#include "GunTowerModuleAnimInstance.generated.h"

UCLASS(NonTransient)
class UGunTowerModuleAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    FRotator CurrentModuleRotation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    FRotator CurrentLookAtRotation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool IsModuleActive;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool AreWeakpointsExposed;
    
    UGunTowerModuleAnimInstance();
};

