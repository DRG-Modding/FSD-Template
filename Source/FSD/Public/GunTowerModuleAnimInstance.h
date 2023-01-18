#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "UObject/NoExportTypes.h"
#include "GunTowerModuleAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class UGunTowerModuleAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRotator CurrentModuleRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRotator CurrentLookAtRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsModuleActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool AreWeakpointsExposed;
    
    UGunTowerModuleAnimInstance();
};

